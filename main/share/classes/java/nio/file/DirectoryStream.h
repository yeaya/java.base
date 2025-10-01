#ifndef _java_nio_file_DirectoryStream_h_
#define _java_nio_file_DirectoryStream_h_
//$ interface java.nio.file.DirectoryStream
//$ extends java.io.Closeable,java.lang.Iterable

#include <java/io/Closeable.h>
#include <java/lang/Iterable.h>

namespace java {
	namespace nio {
		namespace file {

class $export DirectoryStream : public ::java::io::Closeable, public ::java::lang::Iterable {
	$interface(DirectoryStream, $NO_CLASS_INIT, ::java::io::Closeable, ::java::lang::Iterable)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* obj) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual ::java::util::Iterator* iterator() override {return nullptr;}
	virtual $String* toString() override;
};

		} // file
	} // nio
} // java

#endif // _java_nio_file_DirectoryStream_h_