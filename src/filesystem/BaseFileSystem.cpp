#include "BaseFileSystem.hpp"

static CBaseFileSystem gFileSystem;

EXPOSE_SINGLE_INTERFACE_GLOBALVAR(CBaseFileSystem, IFileSystem, BASEFILESYSTEM_INTERFACE_VERSION, gBaseFileSystem)
EXPOSE_SINGLE_INTERFACE_GLOBALVAR(CFileSystem, IFileSystem, FILESYSTEM_INTERFACE_VERSION, gFileSystem)