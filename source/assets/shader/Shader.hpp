#ifndef SHADER_HPP
#define SHADER_HPP

#include <epoxy/gl.h>
#include <string>

namespace glPortal {

class Shader {
public:
  int handle;
  GLint uni(const char*) const;
  GLint uni(const std::string&) const;
};

} /* namespace glPortal */

#endif /* SHADER_HPP */
