#ifndef _OpsAfterClose4InputStream$2_h_
#define _OpsAfterClose4InputStream$2_h_
//$ class OpsAfterClose4InputStream$2
//$ extends OpsAfterClose4InputStream

#include <OpsAfterClose4InputStream.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

class OpsAfterClose4InputStream$2 : public ::OpsAfterClose4InputStream {
	$class(OpsAfterClose4InputStream$2, $NO_CLASS_INIT, ::OpsAfterClose4InputStream)
public:
	OpsAfterClose4InputStream$2();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::InputStream* is) override;
};

#endif // _OpsAfterClose4InputStream$2_h_