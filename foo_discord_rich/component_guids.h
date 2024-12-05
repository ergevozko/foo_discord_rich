#pragma once

namespace drp::guid
{

constexpr GUID acfu_source = { 0x19eeccd4, 0x18c6, 0x40ae, { 0x94, 0xbc, 0xb0, 0x63, 0x1d, 0x77, 0xe3, 0x8d } };
constexpr GUID adv_branch = { 0x9a118344, 0x6c4, 0x4945, { 0x93, 0x73, 0xd, 0x8d, 0x34, 0xc5, 0x5c, 0x8 } };
constexpr GUID adv_branch_log = { 0x42bba691, 0x993, 0x4c90, { 0x9b, 0x99, 0xac, 0xf9, 0x2a, 0x76, 0x1d, 0xf7 } };
constexpr GUID adv_var_enable_debug_log = { 0xbbdf6fb9, 0xce6b, 0x4125, { 0x99, 0x5c, 0x90, 0xdc, 0x14, 0xac, 0x3e, 0xfc } };
constexpr GUID adv_var_log_uploader_cmd = { 0xa57f4694, 0xbe23, 0x489b, { 0xaf, 0x33, 0x9b, 0x3a, 0x14, 0xa8, 0xd, 0xa9 } };
constexpr GUID adv_var_log_uploader_output = { 0x3c76845d, 0x10d3, 0x40ef, { 0xbb, 0xf0, 0x96, 0x61, 0xa3, 0xeb, 0xfe, 0x7 } };
constexpr GUID adv_var_log_web_requests = { 0x95f71e1f, 0x785, 0x4aa1, { 0xbf, 0x16, 0x27, 0x5, 0x94, 0x78, 0xbd, 0xa9 } };
constexpr GUID adv_var_log_web_responses = { 0x33dfb15d, 0x3eb9, 0x4e8d, { 0xa3, 0xc7, 0xf7, 0x19, 0x70, 0xb8, 0x73, 0xb2 } };
constexpr GUID conf_app_token = { 0x81e899fe, 0x79f2, 0x484a, { 0xa1, 0xbe, 0x25, 0x7c, 0x8d, 0x59, 0xc, 0x9b } };
constexpr GUID conf_art_upload_cmd = { 0x9d4c88b, 0x2706, 0x4e98, { 0x86, 0x4a, 0xda, 0xa1, 0x70, 0x95, 0x2f, 0x4c } };
constexpr GUID conf_art_upload_pin_query = { 0x717c4690, 0x124d, 0x4596, { 0xb8, 0x8c, 0xda, 0xb6, 0x40, 0x7d, 0x35, 0xfb } };
constexpr GUID conf_bottom_text_query_v1_deprecated = { 0xb678c223, 0xf312, 0x4629, { 0x89, 0xc5, 0x10, 0x30, 0x41, 0x2, 0xd7, 0x90 } };
constexpr GUID conf_bottom_text_query_v2 = { 0xa2fd7075, 0x287b, 0x4b0c, { 0xa7, 0x87, 0x30, 0x48, 0xc0, 0xe, 0xa9, 0xe0 } };
constexpr GUID conf_disable_when_paused = { 0x583c1ad6, 0x1865, 0x4fdc, { 0xb9, 0x46, 0x6a, 0x3c, 0x3d, 0xc1, 0xca, 0x79 } };
constexpr GUID conf_enable_album_art_fetch = { 0x22cd8898, 0xfe4a, 0x4d1b, { 0x87, 0x75, 0x5a, 0x36, 0x9e, 0x17, 0xa1, 0x74 } };
constexpr GUID conf_enable_art_upload = { 0x72a7b301, 0xdffe, 0x4566, { 0x8f, 0x39, 0xaf, 0x34, 0xe0, 0x91, 0x6a, 0x43 } };
constexpr GUID conf_is_enabled = { 0x13ff3bbd, 0x1797, 0x42f1, { 0x96, 0xf4, 0x9d, 0xaf, 0x57, 0x31, 0x8d, 0xd2 } };
constexpr GUID conf_large_image_id_dark = { 0xc8327fdd, 0x5d09, 0x401a, { 0x89, 0xf5, 0x66, 0x76, 0x2d, 0xf8, 0xa1, 0xca } };
constexpr GUID conf_large_image_id_light = { 0x8d6c66f3, 0xbfb7, 0x43aa, { 0x94, 0xe7, 0x9c, 0x17, 0xee, 0x88, 0xc2, 0xae } };
constexpr GUID conf_large_image_settings = { 0x5148849e, 0xc4a5, 0x4f5f, { 0xbd, 0xc1, 0x50, 0x21, 0x4, 0x1c, 0xfa, 0x8e } };
constexpr GUID conf_middle_text_query = { 0xdad72a56, 0x3388, 0x475c, { 0xa8, 0xc0, 0x16, 0x9d, 0x50, 0x89, 0x3e, 0x11 } };
constexpr GUID conf_paused_image_id_dark = { 0x3922cfc0, 0xa2a7, 0x440a, { 0xb4, 0x8d, 0x72, 0xec, 0x67, 0x4c, 0x62, 0x26 } };
constexpr GUID conf_paused_image_id_light = { 0xa64507db, 0xdbee, 0x4268, { 0xac, 0xa6, 0xf, 0xf7, 0x5f, 0x3e, 0xe7, 0x7b } };
constexpr GUID conf_playing_image_id_dark = { 0xf5938c83, 0xb1e1, 0x4988, { 0xaf, 0x30, 0xd1, 0x1b, 0x37, 0xdf, 0xed, 0x4 } };
constexpr GUID conf_playing_image_id_light = { 0xcd35bf8a, 0x2548, 0x4d12, { 0xb8, 0x56, 0xc5, 0xcd, 0xb7, 0xaa, 0xf, 0xd4 } };
constexpr GUID conf_small_image_settings = { 0x2933e84f, 0x9086, 0x463f, { 0x85, 0x8, 0x42, 0xaa, 0x60, 0xf, 0xba, 0x1 } };
constexpr GUID conf_swap_small_images = { 0x2778851b, 0x8a50, 0x4105, { 0x87, 0x55, 0xe1, 0x62, 0xbe, 0xee, 0xcf, 0x2d } };
constexpr GUID conf_time_settings = { 0xca5e9b25, 0x83db, 0x424b, { 0x85, 0xf3, 0x5, 0x7b, 0x8a, 0x18, 0xcc, 0xcd } };
constexpr GUID conf_top_text_query = { 0xcdf5f57f, 0x1ad2, 0x4a87, { 0xa4, 0xcd, 0x29, 0x4a, 0x8f, 0x51, 0x15, 0xb0 } };
constexpr GUID mainmenu_cmd_enable = { 0x5d356c52, 0xb24, 0x4501, { 0x96, 0xb4, 0x37, 0xf9, 0xb1, 0x4b, 0xf4, 0x93 } };
constexpr GUID ui_pref = { 0xc09b193e, 0xb53d, 0x4652, { 0xa9, 0xa2, 0xf6, 0xbc, 0xe9, 0x65, 0x1f, 0xe9 } };

} // namespace drp::guid
