#pragma once

#include <ngs/system.h>

namespace ngs::player {
struct VoiceDefinition : public ngs::VoiceDefinition {
    void new_modules(std::vector<std::unique_ptr<ngs::Module>> &mods) override;
    std::size_t get_total_buffer_parameter_size() const override;
    std::uint32_t output_count() const { return 1; }
};
}; // namespace ngs::player
