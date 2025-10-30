#include <sun/net/ftp/FtpDirEntry.h>

#include <java/text/DateFormat.h>
#include <java/util/Date.h>
#include <java/util/HashMap.h>
#include <sun/net/ftp/FtpDirEntry$Permission.h>
#include <sun/net/ftp/FtpDirEntry$Type.h>
#include <jcpp.h>

#undef FILE

using $booleanArray2 = $Array<bool, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DateFormat = ::java::text::DateFormat;
using $Date = ::java::util::Date;
using $HashMap = ::java::util::HashMap;
using $FtpDirEntry$Permission = ::sun::net::ftp::FtpDirEntry$Permission;
using $FtpDirEntry$Type = ::sun::net::ftp::FtpDirEntry$Type;

namespace sun {
	namespace net {
		namespace ftp {

$FieldInfo _FtpDirEntry_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(FtpDirEntry, name)},
	{"user", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FtpDirEntry, user)},
	{"group", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FtpDirEntry, group)},
	{"size", "J", nullptr, $PRIVATE, $field(FtpDirEntry, size)},
	{"created", "Ljava/util/Date;", nullptr, $PRIVATE, $field(FtpDirEntry, created)},
	{"lastModified", "Ljava/util/Date;", nullptr, $PRIVATE, $field(FtpDirEntry, lastModified)},
	{"type", "Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PRIVATE, $field(FtpDirEntry, type)},
	{"permissions", "[[Z", nullptr, $PRIVATE, $field(FtpDirEntry, permissions)},
	{"facts", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(FtpDirEntry, facts)},
	{}
};

$MethodInfo _FtpDirEntry_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(FtpDirEntry::*)()>(&FtpDirEntry::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(FtpDirEntry::*)($String*)>(&FtpDirEntry::init$))},
	{"addFact", "(Ljava/lang/String;Ljava/lang/String;)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC},
	{"canExexcute", "(Lsun/net/ftp/FtpDirEntry$Permission;)Z", nullptr, $PUBLIC},
	{"canRead", "(Lsun/net/ftp/FtpDirEntry$Permission;)Z", nullptr, $PUBLIC},
	{"canWrite", "(Lsun/net/ftp/FtpDirEntry$Permission;)Z", nullptr, $PUBLIC},
	{"getCreated", "()Ljava/util/Date;", nullptr, $PUBLIC},
	{"getFact", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getGroup", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLastModified", "()Ljava/util/Date;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSize", "()J", nullptr, $PUBLIC},
	{"getType", "()Lsun/net/ftp/FtpDirEntry$Type;", nullptr, $PUBLIC},
	{"getUser", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setCreated", "(Ljava/util/Date;)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC},
	{"setGroup", "(Ljava/lang/String;)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC},
	{"setLastModified", "(Ljava/util/Date;)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC},
	{"setPermissions", "([[Z)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC},
	{"setSize", "(J)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC},
	{"setType", "(Lsun/net/ftp/FtpDirEntry$Type;)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC},
	{"setUser", "(Ljava/lang/String;)Lsun/net/ftp/FtpDirEntry;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FtpDirEntry_InnerClassesInfo_[] = {
	{"sun.net.ftp.FtpDirEntry$Permission", "sun.net.ftp.FtpDirEntry", "Permission", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"sun.net.ftp.FtpDirEntry$Type", "sun.net.ftp.FtpDirEntry", "Type", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _FtpDirEntry_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.net.ftp.FtpDirEntry",
	"java.lang.Object",
	nullptr,
	_FtpDirEntry_FieldInfo_,
	_FtpDirEntry_MethodInfo_,
	nullptr,
	nullptr,
	_FtpDirEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.ftp.FtpDirEntry$Permission,sun.net.ftp.FtpDirEntry$Type"
};

$Object* allocate$FtpDirEntry($Class* clazz) {
	return $of($alloc(FtpDirEntry));
}

void FtpDirEntry::init$() {
	$set(this, user, nullptr);
	$set(this, group, nullptr);
	this->size = -1;
	$set(this, created, nullptr);
	$set(this, lastModified, nullptr);
	$init($FtpDirEntry$Type);
	$set(this, type, $FtpDirEntry$Type::FILE);
	$set(this, permissions, nullptr);
	$set(this, facts, $new($HashMap));
	$set(this, name, nullptr);
}

void FtpDirEntry::init$($String* name) {
	$set(this, user, nullptr);
	$set(this, group, nullptr);
	this->size = -1;
	$set(this, created, nullptr);
	$set(this, lastModified, nullptr);
	$init($FtpDirEntry$Type);
	$set(this, type, $FtpDirEntry$Type::FILE);
	$set(this, permissions, nullptr);
	$set(this, facts, $new($HashMap));
	$set(this, name, name);
}

$String* FtpDirEntry::getName() {
	return this->name;
}

$String* FtpDirEntry::getUser() {
	return this->user;
}

FtpDirEntry* FtpDirEntry::setUser($String* user) {
	$set(this, user, user);
	return this;
}

$String* FtpDirEntry::getGroup() {
	return this->group;
}

FtpDirEntry* FtpDirEntry::setGroup($String* group) {
	$set(this, group, group);
	return this;
}

int64_t FtpDirEntry::getSize() {
	return this->size;
}

FtpDirEntry* FtpDirEntry::setSize(int64_t size) {
	this->size = size;
	return this;
}

$FtpDirEntry$Type* FtpDirEntry::getType() {
	return this->type;
}

FtpDirEntry* FtpDirEntry::setType($FtpDirEntry$Type* type) {
	$set(this, type, type);
	return this;
}

$Date* FtpDirEntry::getLastModified() {
	return this->lastModified;
}

FtpDirEntry* FtpDirEntry::setLastModified($Date* lastModified) {
	$set(this, lastModified, lastModified);
	return this;
}

bool FtpDirEntry::canRead($FtpDirEntry$Permission* p) {
	if (this->permissions != nullptr) {
		return $nc($nc(this->permissions)->get($nc(p)->value))->get(0);
	}
	return false;
}

bool FtpDirEntry::canWrite($FtpDirEntry$Permission* p) {
	if (this->permissions != nullptr) {
		return $nc($nc(this->permissions)->get($nc(p)->value))->get(1);
	}
	return false;
}

bool FtpDirEntry::canExexcute($FtpDirEntry$Permission* p) {
	if (this->permissions != nullptr) {
		return $nc($nc(this->permissions)->get($nc(p)->value))->get(2);
	}
	return false;
}

FtpDirEntry* FtpDirEntry::setPermissions($booleanArray2* permissions) {
	$set(this, permissions, permissions);
	return this;
}

FtpDirEntry* FtpDirEntry::addFact($String* fact, $String* value) {
	$nc(this->facts)->put($($nc(fact)->toLowerCase()), value);
	return this;
}

$String* FtpDirEntry::getFact($String* fact) {
	return $cast($String, $nc(this->facts)->get($($nc(fact)->toLowerCase())));
}

$Date* FtpDirEntry::getCreated() {
	return this->created;
}

FtpDirEntry* FtpDirEntry::setCreated($Date* created) {
	$set(this, created, created);
	return this;
}

$String* FtpDirEntry::toString() {
	$useLocalCurrentObjectStackCache();
	if (this->lastModified == nullptr) {
		return $str({this->name, " ["_s, this->type, "] ("_s, this->user, " / "_s, this->group, ") "_s, $$str(this->size)});
	}
	$var($String, var$0, $$str({this->name, " ["_s, this->type, "] ("_s, this->user, " / "_s, this->group, ") {"_s, $$str(this->size), "} "_s}));
	return $concat(var$0, $($nc($($DateFormat::getDateInstance()))->format(this->lastModified)));
}

FtpDirEntry::FtpDirEntry() {
}

$Class* FtpDirEntry::load$($String* name, bool initialize) {
	$loadClass(FtpDirEntry, name, initialize, &_FtpDirEntry_ClassInfo_, allocate$FtpDirEntry);
	return class$;
}

$Class* FtpDirEntry::class$ = nullptr;

		} // ftp
	} // net
} // sun