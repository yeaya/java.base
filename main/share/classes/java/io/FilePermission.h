#ifndef _java_io_FilePermission_h_
#define _java_io_FilePermission_h_
//$ class java.io.FilePermission
//$ extends java.security.Permission

#include <java/security/Permission.h>

#pragma push_macro("READ")
#undef READ
#pragma push_macro("EXECUTE")
#undef EXECUTE
#pragma push_macro("ALL")
#undef ALL
#pragma push_macro("DELETE")
#undef DELETE
#pragma push_macro("DOTDOT_PATH")
#undef DOTDOT_PATH
#pragma push_macro("RECURSIVE_CHAR")
#undef RECURSIVE_CHAR
#pragma push_macro("READLINK")
#undef READLINK
#pragma push_macro("NONE")
#undef NONE
#pragma push_macro("EMPTY_PATH")
#undef EMPTY_PATH
#pragma push_macro("DASH_PATH")
#undef DASH_PATH
#pragma push_macro("WRITE")
#undef WRITE
#pragma push_macro("WILD_CHAR")
#undef WILD_CHAR

namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
			class Path;
		}
	}
}
namespace java {
	namespace security {
		class PermissionCollection;
	}
}

namespace java {
	namespace io {

class $export FilePermission : public ::java::security::Permission {
	$class(FilePermission, 0, ::java::security::Permission)
public:
	FilePermission();
	void init$($String* name, ::java::io::FilePermission* input, ::java::nio::file::Path* npath, ::java::nio::file::Path* npath2, int32_t mask, $String* actions);
	void init$($String* path, $String* actions);
	void init$($String* path, int32_t mask);
	static ::java::nio::file::Path* altPath(::java::nio::file::Path* in);
	static int32_t containsPath(::java::nio::file::Path* p1, ::java::nio::file::Path* p2);
	virtual bool equals(Object$* obj) override;
	static $String* getActions(int32_t mask);
	virtual $String* getActions() override;
	static int32_t getMask($String* actions);
	int32_t getMask();
	virtual int32_t hashCode() override;
	virtual bool implies(::java::security::Permission* p) override;
	bool impliesIgnoreMask(::java::io::FilePermission* that);
	void init(int32_t mask);
	virtual ::java::security::PermissionCollection* newPermissionCollection() override;
	void readObject(::java::io::ObjectInputStream* s);
	::java::io::FilePermission* withNewActions(int32_t effective);
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t EXECUTE = 1;
	static const int32_t WRITE = 2;
	static const int32_t READ = 4;
	static const int32_t DELETE = 8;
	static const int32_t READLINK = 16;
	static const int32_t ALL = 31; // READ | WRITE | EXECUTE | DELETE | READLINK
	static const int32_t NONE = 0;
	int32_t mask = 0;
	bool directory = false;
	bool recursive = false;
	$String* actions = nullptr;
	$String* cpath = nullptr;
	::java::nio::file::Path* npath = nullptr;
	::java::nio::file::Path* npath2 = nullptr;
	bool allFiles = false;
	bool invalid = false;
	static const char16_t RECURSIVE_CHAR = ((char16_t)45);
	static const char16_t WILD_CHAR = ((char16_t)42);
	static const int64_t serialVersionUID = (int64_t)0x6E0F9F93F4C0A9BB;
	static ::java::nio::file::FileSystem* builtInFS;
	static ::java::nio::file::Path* here;
	static ::java::nio::file::Path* EMPTY_PATH;
	static ::java::nio::file::Path* DASH_PATH;
	static ::java::nio::file::Path* DOTDOT_PATH;
};

	} // io
} // java

#pragma pop_macro("READ")
#pragma pop_macro("EXECUTE")
#pragma pop_macro("ALL")
#pragma pop_macro("DELETE")
#pragma pop_macro("DOTDOT_PATH")
#pragma pop_macro("RECURSIVE_CHAR")
#pragma pop_macro("READLINK")
#pragma pop_macro("NONE")
#pragma pop_macro("EMPTY_PATH")
#pragma pop_macro("DASH_PATH")
#pragma pop_macro("WRITE")
#pragma pop_macro("WILD_CHAR")

#endif // _java_io_FilePermission_h_