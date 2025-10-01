#ifndef _java_nio_file_attribute_UserDefinedFileAttributeView_h_
#define _java_nio_file_attribute_UserDefinedFileAttributeView_h_
//$ interface java.nio.file.attribute.UserDefinedFileAttributeView
//$ extends java.nio.file.attribute.FileAttributeView

#include <java/nio/file/attribute/FileAttributeView.h>

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {

class $export UserDefinedFileAttributeView : public ::java::nio::file::attribute::FileAttributeView {
	$interface(UserDefinedFileAttributeView, $NO_CLASS_INIT, ::java::nio::file::attribute::FileAttributeView)
public:
	virtual void delete$($String* name) {}
	virtual ::java::util::List* list() {return nullptr;}
	virtual $String* name() override {return nullptr;}
	virtual int32_t read($String* name, ::java::nio::ByteBuffer* dst) {return 0;}
	virtual int32_t size($String* name) {return 0;}
	virtual int32_t write($String* name, ::java::nio::ByteBuffer* src) {return 0;}
};

			} // attribute
		} // file
	} // nio
} // java

#endif // _java_nio_file_attribute_UserDefinedFileAttributeView_h_