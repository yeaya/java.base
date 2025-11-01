#ifndef _indify_Indify$Code_h_
#define _indify_Indify$Code_h_
//$ class indify.Indify$Code
//$ extends indify.Indify$InnerOuter
//$ implements indify.Indify$Chunk

#include <indify/Indify$Chunk.h>
#include <indify/Indify$InnerOuter.h>
#include <java/lang/Array.h>

namespace indify {
	class Indify$Instruction;
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

class $export Indify$Code : public ::indify::Indify$InnerOuter, public ::indify::Indify$Chunk {
	$class(Indify$Code, $NO_CLASS_INIT, ::indify::Indify$InnerOuter, ::indify::Indify$Chunk)
public:
	Indify$Code();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::java::util::List* attrs() override;
	virtual ::java::util::List* inners() override;
	virtual ::indify::Indify$Instruction* instructions();
	using ::indify::Indify$InnerOuter::outer;
	virtual void readFrom(::java::io::DataInputStream* in) override;
	virtual $String* toString() override;
	virtual void writeTo(::java::io::DataOutputStream* out) override;
	int16_t stacks = 0;
	int16_t locals = 0;
	$bytes* bytes = nullptr;
	::java::util::List* etable = nullptr;
	::java::util::List* attrs$ = nullptr;
};

} // indify

#endif // _indify_Indify$Code_h_