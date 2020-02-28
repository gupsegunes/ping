#include "Ping.hpp"
void Ping::stop() {}

void Ping::start() {
  tickPeriodically();
}

void Ping::tick() {
  LOG_INFO(get_message().c_str());
}