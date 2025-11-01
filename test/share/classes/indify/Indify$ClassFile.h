#ifndef _indify_Indify$ClassFile_h_
#define _indify_Indify$ClassFile_h_
//$ class indify.Indify$ClassFile
//$ extends indify.Indify$Outer
//$ implements indify.Indify$Chunk

#include <indify/Indify$Chunk.h>
#include <indify/Indify$Outer.h>
#include <java/lang/Array.h>

namespace indify {
	class Indify;
	class Indify$Pool;
}
namespace java {
	namespace io {
		class DataInputStream;
		class DataOutputStream;
		class File;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace indify {

class $export Indify$ClassFile : public ::indify::Indify$Outer, public ::indify::Indify$Chunk {
	$class(Indify$ClassFile, $NO_CLASS_INIT, ::indify::Indify$Outer, ::indify::Indify$Chunk)
public:
	Indify$ClassFile();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::indify::Indify* this$0, ::java::io::File* f);
	virtual ::java::util::List* attrs() override;
	virtual ::java::util::List* inners() override;
	virtual $String* nameString();
	virtual void readFrom(::java::io::DataInputStream* in) override;
	virtual $bytes* toByteArray();
	virtual $String* toString() override;
	virtual void writeTo(::java::io::File* f);
	virtual void writeTo(::java::io::DataOutputStream* out) override;
	::indify::Indify* this$0 = nullptr;
	int32_t magic = 0;
	int32_t version = 0;
	::indify::Indify$Pool* pool = nullptr;
	int16_t access = 0;
	int16_t thisc = 0;
	int16_t superc = 0;
	::java::util::List* interfaces = nullptr;
	::java::util::List* fields = nullptr;
	::java::util::List* methods = nullptr;
	::java::util::List* attrs$ = nullptr;
	int32_t Code_index = 0;
};

} // indify

#endif // _indify_Indify$ClassFile_h_