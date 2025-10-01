#ifndef _OpsAfterClose4FileOutputStream$6_h_
#define _OpsAfterClose4FileOutputStream$6_h_
//$ class OpsAfterClose4FileOutputStream$6
//$ extends OpsAfterClose4FileOutputStream

#include <OpsAfterClose4FileOutputStream.h>

namespace java {
	namespace io {
		class FileOutputStream;
	}
}

class OpsAfterClose4FileOutputStream$6 : public ::OpsAfterClose4FileOutputStream {
	$class(OpsAfterClose4FileOutputStream$6, $NO_CLASS_INIT, ::OpsAfterClose4FileOutputStream)
public:
	OpsAfterClose4FileOutputStream$6();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool check(::java::io::FileOutputStream* r) override;
};

#endif // _OpsAfterClose4FileOutputStream$6_h_