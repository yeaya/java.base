#ifndef _indify_Indify$Constant_h_
#define _indify_Indify$Constant_h_
//$ class indify.Indify$Constant
//$ extends indify.Indify$Chunk

#include <indify/Indify$Chunk.h>
#include <java/lang/Array.h>

#pragma push_macro("TAG_NAMES")
#undef TAG_NAMES

namespace java {
	namespace io {
		class DataInputStream;
		class DataOutputStream;
	}
}
namespace java {
	namespace lang {
		class Short;
	}
}

namespace indify {

class $export Indify$Constant : public ::indify::Indify$Chunk {
	$class(Indify$Constant, $NO_CLASS_INIT, ::indify::Indify$Chunk)
public:
	Indify$Constant();
	void init$(int32_t index, int8_t tag, Object$* item);
	virtual ::indify::Indify$Constant* checkTag(int8_t tag);
	virtual bool equals(Object$* x) override;
	virtual bool equals(::indify::Indify$Constant* that);
	virtual int32_t hashCode() override;
	virtual $Object* itemAsComparable();
	virtual ::java::lang::Short* itemIndex();
	virtual $Array<::java::lang::Short>* itemIndexes();
	virtual $String* itemString();
	virtual void readFrom(::java::io::DataInputStream* in) override;
	static $String* tagName(int8_t tag);
	virtual $String* toString() override;
	virtual void writeTo(::java::io::DataOutputStream* out) override;
	int8_t tag = 0;
	$Object* item = nullptr;
	int32_t index = 0;
	static $StringArray* TAG_NAMES;
};

} // indify

#pragma pop_macro("TAG_NAMES")

#endif // _indify_Indify$Constant_h_