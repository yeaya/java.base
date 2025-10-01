#ifndef _sun_nio_fs_AbstractUserDefinedFileAttributeView_h_
#define _sun_nio_fs_AbstractUserDefinedFileAttributeView_h_
//$ class sun.nio.fs.AbstractUserDefinedFileAttributeView
//$ extends java.nio.file.attribute.UserDefinedFileAttributeView
//$ implements sun.nio.fs.DynamicFileAttributeView

#include <java/lang/Array.h>
#include <java/nio/file/attribute/UserDefinedFileAttributeView.h>
#include <sun/nio/fs/DynamicFileAttributeView.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace sun {
	namespace nio {
		namespace fs {

class AbstractUserDefinedFileAttributeView : public ::java::nio::file::attribute::UserDefinedFileAttributeView, public ::sun::nio::fs::DynamicFileAttributeView {
	$class(AbstractUserDefinedFileAttributeView, 0, ::java::nio::file::attribute::UserDefinedFileAttributeView, ::sun::nio::fs::DynamicFileAttributeView)
public:
	AbstractUserDefinedFileAttributeView();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void checkAccess($String* file, bool checkRead, bool checkWrite);
	virtual $String* name() override;
	virtual ::java::util::Map* readAttributes($StringArray* attributes) override;
	virtual void setAttribute($String* attribute, Object$* value) override;
	virtual $String* toString() override;
	static bool $assertionsDisabled;
};

		} // fs
	} // nio
} // sun

#endif // _sun_nio_fs_AbstractUserDefinedFileAttributeView_h_