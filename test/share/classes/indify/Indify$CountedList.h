#ifndef _indify_Indify$CountedList_h_
#define _indify_Indify$CountedList_h_
//$ class indify.Indify$CountedList
//$ extends java.util.ArrayList
//$ implements indify.Indify$Chunk

#include <indify/Indify$Chunk.h>
#include <java/util/ArrayList.h>

namespace java {
	namespace io {
		class DataInputStream;
		class DataOutputStream;
	}
}

namespace indify {

class Indify$CountedList : public ::java::util::ArrayList, public ::indify::Indify$Chunk {
	$class(Indify$CountedList, $NO_CLASS_INIT, ::java::util::ArrayList, ::indify::Indify$Chunk)
public:
	Indify$CountedList();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($Class* itemClass, int32_t rowlen);
	void init$($Class* itemClass);
	virtual void readFrom(::java::io::DataInputStream* in) override;
	using ::java::util::ArrayList::toArray;
	virtual $String* toString() override;
	virtual void writeTo(::java::io::DataOutputStream* out) override;
	$Class* itemClass = nullptr;
	int32_t rowlen = 0;
};

} // indify

#endif // _indify_Indify$CountedList_h_