#ifndef _java_nio_file_attribute_PosixFileAttributeView_h_
#define _java_nio_file_attribute_PosixFileAttributeView_h_
//$ interface java.nio.file.attribute.PosixFileAttributeView
//$ extends java.nio.file.attribute.BasicFileAttributeView,java.nio.file.attribute.FileOwnerAttributeView

#include <java/nio/file/attribute/BasicFileAttributeView.h>
#include <java/nio/file/attribute/FileOwnerAttributeView.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class GroupPrincipal;
			}
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $import PosixFileAttributeView : public ::java::nio::file::attribute::BasicFileAttributeView, public ::java::nio::file::attribute::FileOwnerAttributeView {
	$interface(PosixFileAttributeView, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributeView, ::java::nio::file::attribute::FileOwnerAttributeView)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual $String* name() override {return nullptr;}
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override {return nullptr;}
	virtual void setGroup(::java::nio::file::attribute::GroupPrincipal* group) {}
	virtual void setPermissions(::java::util::Set* perms) {}
	virtual $String* toString() override;
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_PosixFileAttributeView_h_