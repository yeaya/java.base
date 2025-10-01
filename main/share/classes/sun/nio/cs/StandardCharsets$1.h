#ifndef _sun_nio_cs_StandardCharsets$1_h_
#define _sun_nio_cs_StandardCharsets$1_h_
//$ class sun.nio.cs.StandardCharsets$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class Set;
	}
}
namespace sun {
	namespace nio {
		namespace cs {
			class StandardCharsets;
		}
	}
}

namespace sun {
	namespace nio {
		namespace cs {

class StandardCharsets$1 : public ::java::util::Iterator {
	$class(StandardCharsets$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	StandardCharsets$1();
	void init$(::sun::nio::cs::StandardCharsets* this$0, ::java::util::Set* val$charsetNames);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::sun::nio::cs::StandardCharsets* this$0 = nullptr;
	::java::util::Set* val$charsetNames = nullptr;
	::java::util::Iterator* i = nullptr;
};

		} // cs
	} // nio
} // sun

#endif // _sun_nio_cs_StandardCharsets$1_h_