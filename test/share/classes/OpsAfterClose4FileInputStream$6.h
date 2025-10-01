#ifndef _OpsAfterClose4FileInputStream$6_h_
#define _OpsAfterClose4FileInputStream$6_h_
//$ class OpsAfterClose4FileInputStream$6
//$ extends OpsAfterClose4FileInputStream

#include <OpsAfterClose4FileInputStream.h>

namespace java {
	namespace io {
		class FileInputStream;
	}
}

class OpsAfterClose4FileInputStream$6 : public ::OpsAfterClose4FileInputStream {
	$class(OpsAfterClose4FileInputStream$6, $NO_CLASS_INIT, ::OpsAfterClose4FileInputStream)
public:
	OpsAfterClose4FileInputStream$6();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::FileInputStream* r) override;
};

#endif // _OpsAfterClose4FileInputStream$6_h_