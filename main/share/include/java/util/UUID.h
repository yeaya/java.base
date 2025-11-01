#ifndef _java_util_UUID_h_
#define _java_util_UUID_h_
//$ class java.util.UUID
//$ extends java.io.Serializable
//$ implements java.lang.Comparable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Comparable.h>

#pragma push_macro("NIBBLES")
#undef NIBBLES
#pragma push_macro("UUID")
#undef UUID

namespace jdk {
	namespace internal {
		namespace access {
			class JavaLangAccess;
		}
	}
}

namespace java {
	namespace util {

class $import UUID : public ::java::io::Serializable, public ::java::lang::Comparable {
	$class(UUID, 0, ::java::io::Serializable, ::java::lang::Comparable)
public:
	UUID();
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($bytes* data);
	void init$(int64_t mostSigBits, int64_t leastSigBits);
	int32_t clockSequence();
	int32_t compareTo(::java::util::UUID* val);
	virtual int32_t compareTo(Object$* val) override;
	virtual bool equals(Object$* obj) override;
	static ::java::util::UUID* fromString($String* name);
	static ::java::util::UUID* fromString1($String* name);
	int64_t getLeastSignificantBits();
	int64_t getMostSignificantBits();
	virtual int32_t hashCode() override;
	static ::java::util::UUID* nameUUIDFromBytes($bytes* name);
	int64_t node();
	static int64_t parse4Nibbles($String* name, int32_t pos);
	static ::java::util::UUID* randomUUID();
	int64_t timestamp();
	virtual $String* toString() override;
	int32_t variant();
	int32_t version();
	static bool $assertionsDisabled;
	static const int64_t serialVersionUID = (int64_t)0xBC9903F7986D852F;
	int64_t mostSigBits = 0;
	int64_t leastSigBits = 0;
	static ::jdk::internal::access::JavaLangAccess* jla;
	static $bytes* NIBBLES;
};

	} // util
} // java

#pragma pop_macro("NIBBLES")
#pragma pop_macro("UUID")

#endif // _java_util_UUID_h_