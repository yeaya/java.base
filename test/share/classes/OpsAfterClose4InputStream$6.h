#ifndef _OpsAfterClose4InputStream$6_h_
#define _OpsAfterClose4InputStream$6_h_
//$ class OpsAfterClose4InputStream$6
//$ extends OpsAfterClose4InputStream

#include <OpsAfterClose4InputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class OpsAfterClose4InputStream$6 : public ::OpsAfterClose4InputStream {
	$class(OpsAfterClose4InputStream$6, $NO_CLASS_INIT, ::OpsAfterClose4InputStream)
public:
	OpsAfterClose4InputStream$6();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::InputStream* is) override;
};

#endif // _OpsAfterClose4InputStream$6_h_