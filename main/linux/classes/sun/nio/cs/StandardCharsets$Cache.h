#ifndef _sun_nio_cs_StandardCharsets$Cache_h_
#define _sun_nio_cs_StandardCharsets$Cache_h_
//$ class sun.nio.cs.StandardCharsets$Cache
//$ extends sun.util.PreHashedMap

#include <java/lang/Array.h>
#include <sun/util/PreHashedMap.h>

#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("ROWS")
#undef ROWS
#pragma push_macro("SHIFT")
#undef SHIFT
#pragma push_macro("SIZE")
#undef SIZE

namespace sun {
	namespace nio {
		namespace cs {

class StandardCharsets$Cache : public ::sun::util::PreHashedMap {
	$class(StandardCharsets$Cache, $NO_CLASS_INIT, ::sun::util::PreHashedMap)
public:
	StandardCharsets$Cache();
	void init$();
	virtual void init($ObjectArray* ht) override;
	using ::sun::util::PreHashedMap::remove;
	static const int32_t ROWS = 64;
	static const int32_t SIZE = 63;
	static const int32_t SHIFT = 0;
	static const int32_t MASK = 63;
};

		} // cs
	} // nio
} // sun

#pragma pop_macro("MASK")
#pragma pop_macro("ROWS")
#pragma pop_macro("SHIFT")
#pragma pop_macro("SIZE")

#endif // _sun_nio_cs_StandardCharsets$Cache_h_