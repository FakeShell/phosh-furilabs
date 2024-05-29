/*
 * Copyright (C) 2024 Bardia Moshiri
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 * Author: Bardia Moshiri <fakeshell@bardia.tech>
 */

#include <gtk/gtk.h>

#include "quick-setting.h"

#pragma once

G_BEGIN_DECLS

#define PHOSH_TYPE_DARK_MODE_QUICK_SETTING (phosh_dark_mode_quick_setting_get_type ())
G_DECLARE_FINAL_TYPE (PhoshDarkModeQuickSetting,
                      phosh_dark_mode_quick_setting,
                      PHOSH, DARK_MODE_QUICK_SETTING, PhoshQuickSetting)

G_END_DECLS
