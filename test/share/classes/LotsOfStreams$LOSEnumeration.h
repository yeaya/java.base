#ifndef _LotsOfStreams$LOSEnumeration_h_
#define _LotsOfStreams$LOSEnumeration_h_
//$ class LotsOfStreams$LOSEnumeration
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class $export LotsOfStreams$LOSEnumeration : public ::java::util::Enumeration {
	$class(LotsOfStreams$LOSEnumeration, 0, ::java::util::Enumeration)
public:
	LotsOfStreams$LOSEnumeration();
	void init$();
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
	static ::java::io::InputStream* inputStream;
	int32_t left = 0;
};

#endif // _LotsOfStreams$LOSEnumeration_h_