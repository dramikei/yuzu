// Copyright 2019 yuzu emulator team
// Licensed under GPLv2 or any later version
// Refer to the license.txt file included.

#include "core/hle/service/vi/layer/vi_layer.h"

namespace Service::VI {

Layer::Layer(u64 id, std::shared_ptr<NVFlinger::BufferQueue> queue)
    : id{id}, buffer_queue{std::move(queue)} {}

Layer::~Layer() = default;

} // namespace Service::VI
