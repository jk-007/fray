/***************************************************************************
 *   Copyright (C) 2009-2018 by Veselin Georgiev, Slavomir Kaslev,         *
 *                              Deyan Hadzhiev et al                       *
 *   admin@raytracing-bg.net                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
/**
 * @File constants.h
 * @Brief A few useful constants
 */
#pragma once

#define VFB_MAX_SIZE 3000
#define DEFAULT_FRAME_WIDTH 800
#define DEFAULT_FRAME_HEIGHT 600

#define PI 3.141592653589793238
#define INF 1e99

#define MAX_TRACE_DEPTH 10

#define LOW_GLOSSY_SAMPLES 3

#define MAX_TRIANGLES_PER_LEAF 20
#define MAX_DEPTH 64

// large `float' number:
#define LARGE_FLOAT 1e17f

// large `double' number:
#define LARGE_DOUBLE 1e120
