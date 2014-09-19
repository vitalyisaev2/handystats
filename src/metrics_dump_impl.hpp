// Copyright (c) 2014 Yandex LLC. All rights reserved.

#ifndef HANDYSTATS_METRICS_DUMP_IMPL_HPP_
#define HANDYSTATS_METRICS_DUMP_IMPL_HPP_

#include <string>
#include <memory>
#include <map>

#include <handystats/chrono.hpp>
#include <handystats/metrics.hpp>
#include <handystats/metrics/gauge.hpp>

namespace handystats { namespace metrics_dump {

extern chrono::clock::time_point dump_timestamp;

void update(const chrono::clock::time_point&, const chrono::clock::time_point&);

const std::shared_ptr<const std::map<std::string, metrics::metric_variant>> get_dump();

void initialize();
void finalize();


namespace stats {

extern metrics::gauge dump_time;

void update(const chrono::clock::time_point&);

void initialize();
void finalize();

} // namespace stats


}} // namespace handystats::metrics_dump

#endif // HANDYSTATS_METRICS_DUMP_IMPL_HPP_
