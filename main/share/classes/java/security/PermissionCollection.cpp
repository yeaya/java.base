#include <java/security/PermissionCollection.h>
#include <java/io/Serializable.h>
#include <java/security/Permission.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <jcpp.h>

#undef IMMUTABLE
#undef NONNULL

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Permission = ::java::security::Permission;
using $Enumeration = ::java::util::Enumeration;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;

namespace java {
	namespace security {

void PermissionCollection::init$() {
}

$Stream* PermissionCollection::elementsAsStream() {
	$useLocalObjectStack();
	int32_t characteristics = isReadOnly() ? $Spliterator::NONNULL | $Spliterator::IMMUTABLE : $Spliterator::NONNULL;
	return $StreamSupport::stream($($Spliterators::spliteratorUnknownSize($($$nc(elements())->asIterator()), characteristics)), false);
}

void PermissionCollection::setReadOnly() {
	this->readOnly = true;
}

bool PermissionCollection::isReadOnly() {
	return this->readOnly;
}

$String* PermissionCollection::toString() {
	$useLocalObjectStack();
	$var($Enumeration, enum_, elements());
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($$str({$($Serializable::toString()), " (\n"_s}));
	while ($nc(enum_)->hasMoreElements()) {
		try {
			sb->append(" "_s);
			sb->append($($$sure($Permission, enum_->nextElement())->toString()));
			sb->append("\n"_s);
		} catch ($NoSuchElementException& e) {
		}
	}
	sb->append(")\n"_s);
	return sb->toString();
}

PermissionCollection::PermissionCollection() {
}

$Class* PermissionCollection::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PermissionCollection, serialVersionUID)},
		{"readOnly", "Z", nullptr, $PRIVATE | $VOLATILE, $field(PermissionCollection, readOnly)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PermissionCollection, init$, void)},
		{"add", "(Ljava/security/Permission;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PermissionCollection, add, void, $Permission*)},
		{"elements", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/security/Permission;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PermissionCollection, elements, $Enumeration*)},
		{"elementsAsStream", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljava/security/Permission;>;", $PUBLIC, $virtualMethod(PermissionCollection, elementsAsStream, $Stream*)},
		{"implies", "(Ljava/security/Permission;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PermissionCollection, implies, bool, $Permission*)},
		{"isReadOnly", "()Z", nullptr, $PUBLIC, $virtualMethod(PermissionCollection, isReadOnly, bool)},
		{"setReadOnly", "()V", nullptr, $PUBLIC, $virtualMethod(PermissionCollection, setReadOnly, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PermissionCollection, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"java.security.PermissionCollection",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PermissionCollection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PermissionCollection);
	});
	return class$;
}

$Class* PermissionCollection::class$ = nullptr;

	} // security
} // java