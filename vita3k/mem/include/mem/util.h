// Vita3K emulator project
// Copyright (C) 2018 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#pragma once

#include <functional>
#include <map>
#include <memory>
#include <string>
#include <vector>

struct CPUState;
struct MemState;

typedef uint32_t Address;
typedef size_t Generation;
typedef std::unique_ptr<uint8_t[], std::function<void(uint8_t *)>> Memory;
typedef std::vector<Generation> Allocated;
typedef std::map<Generation, std::string> GenerationNames;

typedef void (*BreakpointCallback)(CPUState &, MemState &);

constexpr size_t KB(size_t kb) {
    return kb * 1024;
}

constexpr size_t MB(size_t mb) {
    return mb * KB(1024);
}

constexpr size_t GB(size_t gb) {
    return gb * MB(1024);
}
