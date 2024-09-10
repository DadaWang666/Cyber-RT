#include "cyber/examples/proto/examples.pb.h"

#include "cyber/cyber.h"
#include  <iostream>

void MessageCallback(const std::shared_ptr<apollo::cyber::examples::proto::Chatter>& msg) 
{
  std::cout << "Never give up!" << std::endl;  
  AINFO << "Received message seq-> " << msg->seq();
  AINFO << "msgcontent->" << msg->content();
}

int main(int argc, char* argv[]) {
  // init cyber framework
  apollo::cyber::Init(argv[0]);
  // create listener node
  auto listener_node = apollo::cyber::CreateNode("listener");
  // create listener
std::cout << "create listener" << std::endl;  
  auto listener =
      listener_node->CreateReader<apollo::cyber::examples::proto::Chatter>("channel/chatter", MessageCallback);
  std::cout << "create WaitForShutdown" << std::endl;  
  apollo::cyber::WaitForShutdown();
  return 0;
}