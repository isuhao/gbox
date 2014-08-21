/*!The Graphic Box Library
 * 
 * GBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 2.1 of the License, or
 * (at your option) any later version.
 * 
 * GBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with GBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2014 - 2015, ruki All rights reserved.
 *
 * @author      ruki
 * @file        device.h
 * @ingroup     core
 *
 */
#ifndef GB_CORE_DEVICE_H
#define GB_CORE_DEVICE_H

/* //////////////////////////////////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"

/* //////////////////////////////////////////////////////////////////////////////////////
 * interfaces
 */
__tb_extern_c_enter__

/*! init gl device
 *
 * @return          the device
 */
gb_device_ref_t     gb_device_init_gl(tb_noarg_t);

/*! init bitmap device
 *
 * @param bitmap    the bitmap
 *
 * @return          the device
 */
gb_device_ref_t     gb_device_init_bitmap(gb_bitmap_ref_t bitmap);

#ifdef GB_CONFIG_CORE_DEVICE_HAVE_SKIA
/*! init skia device
 *
 * @param bitmap    the bitmap
 *
 * @return          the device
 */
gb_device_ref_t     gb_device_init_skia(gb_bitmap_ref_t bitmap);
#endif

/*! exit device 
 *
 * @param device    the device
 */
tb_void_t           gb_device_exit(gb_device_ref_t device);

__tb_extern_c_leave__
#endif