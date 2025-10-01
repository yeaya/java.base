#ifndef _sun_nio_fs_AbstractBasicFileAttributeView$AttributesBuilder_h_
#define _sun_nio_fs_AbstractBasicFileAttributeView$AttributesBuilder_h_
//$ class sun.nio.fs.AbstractBasicFileAttributeView$AttributesBuilder
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace util {
		class Map;
		class Set;
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class AbstractBasicFileAttributeView$AttributesBuilder : public ::java::lang::Object {
	$class(AbstractBasicFileAttributeView$AttributesBuilder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	AbstractBasicFileAttributeView$AttributesBuilder();
	void init$(::java::util::Set* allowed, $StringArray* requested);
	virtual void add($String* name, Object$* value);
	static ::sun::nio::fs::AbstractBasicFileAttributeView$AttributesBuilder* create(::java::util::Set* allowed, $StringArray* requested);
	virtual bool match($String* name);
	virtual ::java::util::Map* unmodifiableMap();
	::java::util::Set* names = nullptr;
	::java::util::Map* map = nullptr;
	bool copyAll = false;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_AbstractBasicFileAttributeView$AttributesBuilder_h_