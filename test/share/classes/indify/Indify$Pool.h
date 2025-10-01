#ifndef _indify_Indify$Pool_h_
#define _indify_Indify$Pool_h_
//$ class indify.Indify$Pool
//$ extends indify.Indify$CountedList

#include <indify/Indify$CountedList.h>
#include <java/lang/Array.h>

namespace indify {
	class Indify$Constant;
}
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
namespace java {
	namespace util {
		class Map;
	}
}

namespace indify {

class $export Indify$Pool : public ::indify::Indify$CountedList {
	$class(Indify$Pool, $NO_CLASS_INIT, ::indify::Indify$CountedList)
public:
	Indify$Pool();
	void init$();
	virtual ::indify::Indify$Constant* addConstant(int8_t tag, Object$* item);
	virtual $Object* get(int32_t index) override;
	virtual $Array<::java::lang::Short>* getMemberRef(int16_t index);
	virtual $String* getString(int8_t tag, int16_t index);
	virtual $String* getString(int16_t index);
	virtual $StringArray* getStrings($Array<::java::lang::Short>* indexes);
	void readConstant(::java::io::DataInputStream* in);
	virtual void readFrom(::java::io::DataInputStream* in) override;
	virtual int32_t stringIndex($String* name, bool createIfNotFound);
	using ::indify::Indify$CountedList::toArray;
	virtual void writeTo(::java::io::DataOutputStream* out) override;
	::java::util::Map* strings = nullptr;
};

} // indify

#endif // _indify_Indify$Pool_h_