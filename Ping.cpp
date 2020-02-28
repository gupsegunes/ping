#include "Ping.hpp"
void Ping::stop() {}

void Ping::start() {
  tickPeriodically();
}

void Ping::tick() {
  // create and publish a ping message
  auto proto = tx_ping().initProto();
  proto.setMessage(get_message());
  tx_ping().publish();
}