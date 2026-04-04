#include <sun/security/provider/PolicyFile$PolicyEntry.h>
#include <java/security/CodeSource.h>
#include <java/security/Permission.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <sun/security/provider/PolicyFile.h>
#include <sun/security/util/ResourcesMgr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CodeSource = ::java::security::CodeSource;
using $Permission = ::java::security::Permission;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ResourcesMgr = ::sun::security::util::ResourcesMgr;

namespace sun {
	namespace security {
		namespace provider {

void PolicyFile$PolicyEntry::init$($CodeSource* cs, $List* principals) {
	$set(this, codesource, cs);
	$set(this, permissions, $new($ArrayList));
	$set(this, principals, principals);
}

void PolicyFile$PolicyEntry::init$($CodeSource* cs) {
	PolicyFile$PolicyEntry::init$(cs, nullptr);
}

$List* PolicyFile$PolicyEntry::getPrincipals() {
	return this->principals;
}

void PolicyFile$PolicyEntry::add($Permission* p) {
	$nc(this->permissions)->add(p);
}

$CodeSource* PolicyFile$PolicyEntry::getCodeSource() {
	return this->codesource;
}

$String* PolicyFile$PolicyEntry::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($ResourcesMgr::getString("LPARAM"_s)));
	sb->append($(getCodeSource()));
	sb->append("\n"_s);
	for (int32_t j = 0; j < $nc(this->permissions)->size(); ++j) {
		$var($Permission, p, $cast($Permission, this->permissions->get(j)));
		sb->append($($ResourcesMgr::getString("SPACE"_s)));
		sb->append($($ResourcesMgr::getString("SPACE"_s)));
		sb->append(p);
		sb->append($($ResourcesMgr::getString("NEWLINE"_s)));
	}
	sb->append($($ResourcesMgr::getString("RPARAM"_s)));
	sb->append($($ResourcesMgr::getString("NEWLINE"_s)));
	return sb->toString();
}

PolicyFile$PolicyEntry::PolicyFile$PolicyEntry() {
}

$Class* PolicyFile$PolicyEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"codesource", "Ljava/security/CodeSource;", nullptr, $PRIVATE | $FINAL, $field(PolicyFile$PolicyEntry, codesource)},
		{"permissions", "Ljava/util/List;", "Ljava/util/List<Ljava/security/Permission;>;", $FINAL, $field(PolicyFile$PolicyEntry, permissions)},
		{"principals", "Ljava/util/List;", "Ljava/util/List<Lsun/security/provider/PolicyParser$PrincipalEntry;>;", $PRIVATE | $FINAL, $field(PolicyFile$PolicyEntry, principals)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/security/CodeSource;Ljava/util/List;)V", "(Ljava/security/CodeSource;Ljava/util/List<Lsun/security/provider/PolicyParser$PrincipalEntry;>;)V", 0, $method(PolicyFile$PolicyEntry, init$, void, $CodeSource*, $List*)},
		{"<init>", "(Ljava/security/CodeSource;)V", nullptr, 0, $method(PolicyFile$PolicyEntry, init$, void, $CodeSource*)},
		{"add", "(Ljava/security/Permission;)V", nullptr, 0, $virtualMethod(PolicyFile$PolicyEntry, add, void, $Permission*)},
		{"getCodeSource", "()Ljava/security/CodeSource;", nullptr, 0, $virtualMethod(PolicyFile$PolicyEntry, getCodeSource, $CodeSource*)},
		{"getPrincipals", "()Ljava/util/List;", "()Ljava/util/List<Lsun/security/provider/PolicyParser$PrincipalEntry;>;", 0, $virtualMethod(PolicyFile$PolicyEntry, getPrincipals, $List*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PolicyFile$PolicyEntry, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.provider.PolicyFile$PolicyEntry", "sun.security.provider.PolicyFile", "PolicyEntry", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.security.provider.PolicyFile$PolicyEntry",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.security.provider.PolicyFile"
	};
	$loadClass(PolicyFile$PolicyEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PolicyFile$PolicyEntry);
	});
	return class$;
}

$Class* PolicyFile$PolicyEntry::class$ = nullptr;

		} // provider
	} // security
} // sun