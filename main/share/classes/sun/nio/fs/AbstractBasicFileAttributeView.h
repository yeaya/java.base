#ifndef _sun_nio_fs_AbstractBasicFileAttributeView_h_
#define _sun_nio_fs_AbstractBasicFileAttributeView_h_
//$ class sun.nio.fs.AbstractBasicFileAttributeView
//$ extends java.nio.file.attribute.BasicFileAttributeView
//$ implements sun.nio.fs.DynamicFileAttributeView

#include <java/lang/Array.h>
#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <sun/nio/fs/DynamicFileAttributeView.h>

#pragma push_macro("CREATION_TIME_NAME")
#undef CREATION_TIME_NAME
#pragma push_macro("FILE_KEY_NAME")
#undef FILE_KEY_NAME
#pragma push_macro("IS_DIRECTORY_NAME")
#undef IS_DIRECTORY_NAME
#pragma push_macro("IS_OTHER_NAME")
#undef IS_OTHER_NAME
#pragma push_macro("IS_REGULAR_FILE_NAME")
#undef IS_REGULAR_FILE_NAME
#pragma push_macro("IS_SYMBOLIC_LINK_NAME")
#undef IS_SYMBOLIC_LINK_NAME
#pragma push_macro("LAST_ACCESS_TIME_NAME")
#undef LAST_ACCESS_TIME_NAME
#pragma push_macro("LAST_MODIFIED_TIME_NAME")
#undef LAST_MODIFIED_TIME_NAME
#pragma push_macro("SIZE_NAME")
#undef SIZE_NAME

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace sun {
	namespace nio {
		namespace fs {
			class AbstractBasicFileAttributeView$AttributesBuilder;
		}
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class AbstractBasicFileAttributeView : public ::java::nio::file::attribute::BasicFileAttributeView, public ::sun::nio::fs::DynamicFileAttributeView {
	$class(AbstractBasicFileAttributeView, 0, ::java::nio::file::attribute::BasicFileAttributeView, ::sun::nio::fs::DynamicFileAttributeView)
public:
	AbstractBasicFileAttributeView();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void addRequestedBasicAttributes(::java::nio::file::attribute::BasicFileAttributes* attrs, ::sun::nio::fs::AbstractBasicFileAttributeView$AttributesBuilder* builder);
	virtual $String* name() override;
	using ::java::nio::file::attribute::BasicFileAttributeView::readAttributes;
	virtual ::java::util::Map* readAttributes($StringArray* requested) override;
	virtual void setAttribute($String* attribute, Object$* value) override;
	virtual $String* toString() override;
	static $String* SIZE_NAME;
	static $String* CREATION_TIME_NAME;
	static $String* LAST_ACCESS_TIME_NAME;
	static $String* LAST_MODIFIED_TIME_NAME;
	static $String* FILE_KEY_NAME;
	static $String* IS_DIRECTORY_NAME;
	static $String* IS_REGULAR_FILE_NAME;
	static $String* IS_SYMBOLIC_LINK_NAME;
	static $String* IS_OTHER_NAME;
	static ::java::util::Set* basicAttributeNames;
};

		} // fs
	} // nio
} // sun

#pragma pop_macro("CREATION_TIME_NAME")
#pragma pop_macro("FILE_KEY_NAME")
#pragma pop_macro("IS_DIRECTORY_NAME")
#pragma pop_macro("IS_OTHER_NAME")
#pragma pop_macro("IS_REGULAR_FILE_NAME")
#pragma pop_macro("IS_SYMBOLIC_LINK_NAME")
#pragma pop_macro("LAST_ACCESS_TIME_NAME")
#pragma pop_macro("LAST_MODIFIED_TIME_NAME")
#pragma pop_macro("SIZE_NAME")

#endif // _sun_nio_fs_AbstractBasicFileAttributeView_h_