#include <string.h>

#include "libretro.h"

RETRO_API void retro_init(void) {}
RETRO_API void retro_deinit(void) {}

RETRO_API unsigned retro_api_version(void) { return RETRO_API_VERSION; }

RETRO_API void retro_get_system_info(struct retro_system_info *info) {
    memset(info, 0, sizeof(*info));
    info->library_name = "lib-retro";
    info->library_version = "1.0.0";
    info->valid_extensions = "";
    info->need_fullpath = false;
    info->block_extract = false;
}
RETRO_API void retro_get_system_av_info(struct retro_system_av_info *info) {
    memset(info, 0, sizeof(*info));
    info->geometry.aspect_ratio = 1.0;
    info->geometry.base_height = 400;
    info->geometry.base_width = 400;
    info->geometry.max_height = 400;
    info->geometry.max_width = 400;
    info->timing.fps = 60.0;
    info->timing.sample_rate = 0.;
}

RETRO_API void retro_set_environment(retro_environment_t environment) {}
RETRO_API void retro_set_video_refresh(retro_video_refresh_t videoRefresh) {}
RETRO_API void retro_set_audio_sample(retro_audio_sample_t audioSample) {}
RETRO_API void retro_set_audio_sample_batch(retro_audio_sample_batch_t audioSampleBatch) {}
RETRO_API void retro_set_input_poll(retro_input_poll_t inputPoll) {}
RETRO_API void retro_set_input_state(retro_input_state_t inputState) {}
RETRO_API void retro_set_controller_port_device(unsigned port, unsigned device) {}

RETRO_API void retro_reset(void) {}
RETRO_API void retro_run(void) {}

RETRO_API size_t retro_serialize_size(void) {return 1;}
RETRO_API bool retro_serialize(void *data, size_t size)
{
    if (size < retro_serialize_size()) return false;
    return true;
}
RETRO_API bool retro_unserialize(const void* data, size_t size)
{
    if (size < retro_serialize_size()) return false;
    return true;
}

RETRO_API void retro_cheat_reset(void) {}
RETRO_API void retro_cheat_set(unsigned index, bool enabled, const char *code) {}

RETRO_API bool retro_load_game(const struct retro_game_info *game) { return true; }
RETRO_API bool retro_load_game_special(unsigned game_type, const struct retro_game_info* game_info, size_t num_info) {return true;}
RETRO_API void retro_unload_game(void) {}

RETRO_API unsigned retro_get_region(void) {return 0;}

RETRO_API void* retro_get_memory_data(unsigned id) {
    void* data;
    return data;
}
RETRO_API size_t retro_get_memory_size(unsigned int) {return 0;}