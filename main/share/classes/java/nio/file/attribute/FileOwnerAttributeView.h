#ifndef _java_nio_file_attribute_FileOwnerAttributeView_h_
#define _java_nio_file_attribute_FileOwnerAttributeView_h_
//$ interface java.nio.file.attribute.FileOwnerAttributeView
//$ extends java.nio.file.attribute.FileAttributeView

#include <java/nio/file/attribute/FileAttributeView.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class UserPrincipal;
			}
		}
	}
}

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $export FileOwnerAttributeView : public ::java::nio::file::attribute::FileAttributeView {
	$interface(FileOwnerAttributeView, $NO_CLASS_INIT, ::java::nio::file::attribute::FileAttributeView)
public:
	virtual ::java::nio::file::attribute::UserPrincipal* getOwner() {return nullptr;}
	virtual $String* name() override {return nullptr;}
	virtual void setOwner(::java::nio::file::attribute::UserPrincipal* owner) {}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_FileOwnerAttributeView_h_