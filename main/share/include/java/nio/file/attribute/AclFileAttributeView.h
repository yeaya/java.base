#ifndef _java_nio_file_attribute_AclFileAttributeView_h_
#define _java_nio_file_attribute_AclFileAttributeView_h_
//$ interface java.nio.file.attribute.AclFileAttributeView
//$ extends java.nio.file.attribute.FileOwnerAttributeView

#include <java/nio/file/attribute/FileOwnerAttributeView.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import AclFileAttributeView : public ::java::nio::file::attribute::FileOwnerAttributeView {
	$interface(AclFileAttributeView, $NO_CLASS_INIT, ::java::nio::file::attribute::FileOwnerAttributeView)
public:
	virtual ::java::util::List* getAcl() {return nullptr;}
	virtual $String* name() override {return nullptr;}
	virtual void setAcl(::java::util::List* acl) {}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_AclFileAttributeView_h_