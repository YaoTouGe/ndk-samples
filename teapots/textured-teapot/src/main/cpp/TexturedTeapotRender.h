/*
 * Copyright 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TEAPOTS_TEXTUREDTEAPOTRENDER_H
#define TEAPOTS_TEXTUREDTEAPOTRENDER_H
#include "TeapotRenderer.h"
#include "Texture.h"
/**
 *  class TextureTeapotRender
 *    adding texture into teapot
 *     - create texture buffer and load image in assets/Textures
 *     - enable texture units
 *     - enable texturing inside shaders
 */
class TexturedTeapotRender : public TeapotRenderer {
  GLuint texVbo_ = GL_INVALID_VALUE;
  Texture* texObj_ = nullptr;

 public:
  TexturedTeapotRender();
  virtual ~TexturedTeapotRender();
  virtual void Init(AAssetManager* amgr);
  virtual void Render();
  virtual void Unload();
};

#endif  // TEAPOTS_TEXTUREDTEAPOTRENDER_H
