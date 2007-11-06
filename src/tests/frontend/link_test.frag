/*
** ==========================================================================
**
** $Id: link_test.frag 60 2007-09-18 01:16:07Z hmwill $			
** 
** Linker test - fragment shader
**
** --------------------------------------------------------------------------
**
** $Author: hmwill $
** $Date: 2007-09-17 18:16:07 -0700 (Mon, 17 Sep 2007) $
**
** --------------------------------------------------------------------------
**
** Vincent 3D Rendering Library, Programmable Pipeline Edition
** 
** Copyright (C) 2003-2007 Hans-Martin Will. 
**
** @CDDL_HEADER_START@
**
** The contents of this file are subject to the terms of the
** Common Development and Distribution License, Version 1.0 only
** (the "License").  You may not use this file except in compliance
** with the License.
**
** You can obtain a copy of the license at 
** http://www.vincent3d.com/software/ogles2/license/license.html
** See the License for the specific language governing permissions
** and limitations under the License.
**
** When distributing Covered Code, include this CDDL_HEADER in each
** file and include the License file named LICENSE.TXT in the root folder
** of your distribution.
** If applicable, add the following below this CDDL_HEADER, with the
** fields enclosed by brackets "[]" replaced with your own identifying
** information: Portions Copyright [yyyy] [name of copyright owner]
**
** @CDDL_HEADER_END@
**
** ==========================================================================
*/

uniform sampler2D Texture;

varying vec2  TexCoord[2];
varying float LightIntensity;

void main(void) {
	vec3 color = texture2D(Texture, TexCoord[0]).rgb;

	color = mix(color, vec3(1.0), LightIntensity);

	gl_FragColor = vec4(color, 1.0);
}