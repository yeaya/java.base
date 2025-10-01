#ifndef _sun_net_www_MessageHeader_h_
#define _sun_net_www_MessageHeader_h_
//$ class sun.net.www.MessageHeader
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class PrintStream;
	}
}
namespace java {
	namespace util {
		class Iterator;
		class Map;
	}
}

namespace sun {
	namespace net {
		namespace www {

class $export MessageHeader : public ::java::lang::Object {
	$class(MessageHeader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MessageHeader();
	void init$();
	void init$(::java::io::InputStream* is);
	virtual void add($String* k, $String* v);
	static $String* canonicalID($String* id);
	virtual ::java::util::Map* filterAndAddHeaders($StringArray* excludeList, ::java::util::Map* include);
	virtual bool filterNTLMResponses($String* k);
	virtual $String* findNextValue($String* k, $String* v);
	virtual $String* findValue($String* k);
	virtual $String* getHeaderNamesInList();
	virtual ::java::util::Map* getHeaders();
	virtual ::java::util::Map* getHeaders($StringArray* excludeList);
	virtual int32_t getKey($String* k);
	virtual $String* getKey(int32_t n);
	virtual $String* getValue(int32_t n);
	void grow();
	static bool isRequestline($String* line);
	virtual void mergeHeader(::java::io::InputStream* is);
	virtual ::java::util::Iterator* multiValueIterator($String* k);
	virtual void parseHeader(::java::io::InputStream* is);
	virtual void prepend($String* k, $String* v);
	virtual void print(::java::io::PrintStream* p);
	static void print(int32_t nkeys, $StringArray* keys, $StringArray* values, ::java::io::PrintStream* p);
	virtual void remove($String* k);
	virtual void reset();
	virtual void set(int32_t i, $String* k, $String* v);
	virtual void set($String* k, $String* v);
	virtual void setIfNotSet($String* k, $String* v);
	virtual $String* toString() override;
	$StringArray* keys = nullptr;
	$StringArray* values = nullptr;
	int32_t nkeys = 0;
};

		} // www
	} // net
} // sun

#endif // _sun_net_www_MessageHeader_h_