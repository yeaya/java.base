#ifndef _indify_Indify$Member_h_
#define _indify_Indify$Member_h_
//$ class indify.Indify$Member
//$ extends indify.Indify$InnerOuter
//$ implements indify.Indify$Chunk

#include <indify/Indify$Chunk.h>
#include <indify/Indify$InnerOuter.h>

namespace indify {
	class Indify$Outer;
}
namespace java {
	namespace io {
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

class $export Indify$Member : public ::indify::Indify$InnerOuter, public ::indify::Indify$Chunk {
	$class(Indify$Member, $NO_CLASS_INIT, ::indify::Indify$InnerOuter, ::indify::Indify$Chunk)
public:
	Indify$Member();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::util::List* attrs() override;
	virtual ::java::util::List* inners() override;
	virtual $String* nameString();
	using ::indify::Indify$InnerOuter::outer;
	virtual ::indify::Indify$Outer* outer() override;
	virtual void readFrom(::java::io::DataInputStream* in) override;
	virtual $String* toString() override;
	virtual $String* typeString();
	virtual void writeTo(::java::io::DataOutputStream* out) override;
	int16_t access = 0;
	int16_t name = 0;
	int16_t type = 0;
	::java::util::List* attrs$ = nullptr;
};

} // indify

#endif // _indify_Indify$Member_h_