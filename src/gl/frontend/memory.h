#ifndef GLES_FRONTEND_MEMORY_H
#define GLES_FRONTEND_MEMORY_H 1

/*
** ==========================================================================
**
** $Id$			
** 
** Shading Language Memory Management
**
** --------------------------------------------------------------------------
**
** $Author$
** $Date$
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

/*
** --------------------------------------------------------------------------
** Constants
** --------------------------------------------------------------------------
*/

#define GLES_DEFAULT_PAGE_SIZE 	8192

/*
** --------------------------------------------------------------------------
** Structures
** --------------------------------------------------------------------------
*/

typedef struct MemoryPool MemoryPool;

/*
** --------------------------------------------------------------------------
** Functions
** --------------------------------------------------------------------------
*/

MemoryPool * GlesMemoryPoolCreate(GLsizeiptr defaultPageSize, JumpBuffer * handler);
void GlesMemoryPoolHandler(MemoryPool * pool, JumpBuffer * handler);
void GlesMemoryPoolClear(MemoryPool * pool);
void GlesMemoryPoolDestroy(MemoryPool * pool);
void * GlesMemoryPoolAllocate(MemoryPool * pool, GLsizeiptr amount);


#endif /* GLES_FRONTEND_MEMORY_H */