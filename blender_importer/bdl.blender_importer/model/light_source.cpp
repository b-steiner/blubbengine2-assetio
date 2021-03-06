/**************************************************************************************
**
** Copyright (C) 2016 Bernhard Steiner
**
** This file is part of the blender_importer library
**
** This product is licensed under the GNU General Public License version 3.
** The license is as published by the Free Software Foundation published at
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** Alternatively, this product is licensed under the GNU Lesser General Public
** License version 3 for non-commercial use. The license is as published by the
** Free Software Foundation published at https://www.gnu.org/licenses/lgpl-3.0.html.
**
** Feel free to contact us if you have any questions about licensing or want
** to use the library in a commercial closed source product.
**
**************************************************************************************/


#include <bdl.blender_importer/blender_importer.hpp>
#include "light_source.hpp"

using namespace bdl::blender_importer;

light_source::light_source(const std::string& name) : m_name(name), m_intensity(0), m_angle(0), m_angular_attenuation(0), m_color(0, 0, 0), m_attenuation(0, 0, 0),
m_type(light_source_type::directionallight), m_distance(0), m_has_clipped_sphere(false) { }

light_source::~light_source() { }