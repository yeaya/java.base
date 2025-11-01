#ifndef _indify_Indify$Attr_h_
#define _indify_Indify$Attr_h_
//$ class indify.Indify$Attr
//$ extends indify.Indify$InnerOuter
//$ implements indify.Indify$Chunk

#include <indify/Indify$Chunk.h>
#include <indify/Indify$InnerOuter.h>
#include <java/lang/Array.h>

namespace indify {
	class Indify$Outer;
}
namespace java {
	namespace io {
		class ByteArrayOutputStream;
		class DataInputStream;
		class DataOutputStream;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace indify {

class $export Indify$Attr : public ::indify::Indify$InnerOuter, public ::indify::Indify$Chunk {
	$class(Indify$Attr, $NO_CLASS_INIT, ::indify::Indify$InnerOuter, ::indify::Indify$Chunk)
public:
	Indify$Attr();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::indify::Indify$Outer* outer, $String* name, Object$* item);
	virtual ::java::util::List* attrs() override;
	virtual $bytes* flatten();
	virtual int32_t flatten(::java::io::DataOutputStream* out);
	int32_t flatten(::java::io::ByteArrayOutputStream* buf);
	virtual ::java::util::List* inners() override;
	virtual void linkOuter(::indify::Indify$Outer* o) override;
	virtual $String* nameString();
	using ::indify::Indify$InnerOuter::outer;
	virtual void readFrom(::java::io::DataInputStream* in) override;
	virtual $String* toString() override;
	virtual void writeTo(::java::io::DataOutputStream* out) override;
	int16_t name = 0;
	int32_t size = 0;
	$Object* item = nullptr;
};

} // indify

#endif // _indify_Indify$Attr_h_