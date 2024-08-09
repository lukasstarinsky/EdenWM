#pragma once

#define THROW_IF(check, message) if (check) throw std::runtime_error(message)

/* ======= Type Defs ======= */
#include <cstdint>

using i8  = std::int8_t;
using i16 = std::int16_t;
using i32 = std::int32_t;
using i64 = std::int64_t;

using u8  = std::uint8_t;
using u16 = std::uint16_t;
using u32 = std::uint32_t;
using u64 = std::uint64_t;

using f32 = float;
using f64 = double;

static_assert(sizeof(f32) == 4, "Float is expected to be 4 bytes.");
static_assert(sizeof(f64) == 8, "Double is expected to be 8 bytes.");