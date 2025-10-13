#ifndef _sun_net_www_MimeEntry_h_
#define _sun_net_www_MimeEntry_h_
//$ class sun.net.www.MimeEntry
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

#pragma push_macro("LAUNCH_APPLICATION")
#undef LAUNCH_APPLICATION
#pragma push_macro("LOAD_INTO_BROWSER")
#undef LOAD_INTO_BROWSER
#pragma push_macro("SAVE_TO_FILE")
#undef SAVE_TO_FILE
#pragma push_macro("UNKNOWN")
#undef UNKNOWN

namespace sun {
	namespace net {
		namespace www {

class $export MimeEntry : public ::java::lang::Cloneable {
	$class(MimeEntry, 0, ::java::lang::Cloneable)
public:
	MimeEntry();
	void init$($String* type);
	void init$($String* type, $String* imageFileName, $String* extensionString);
	void init$($String* typeName, int32_t action, $String* command, $String* tempFileNameTemplate);
	void init$($String* typeName, int32_t action, $String* command, $String* imageFileName, $StringArray* fileExtensions);
	virtual $Object* clone() override;
	virtual int32_t getAction();
	virtual $String* getDescription();
	virtual $StringArray* getExtensions();
	virtual $String* getExtensionsAsList();
	virtual $String* getImageFileName();
	virtual $String* getLaunchString();
	virtual $String* getTempFileTemplate();
	virtual $String* getType();
	bool isStarred($String* typeName);
	virtual bool matches($String* type);
	virtual void setAction(int32_t action, $String* command);
	virtual void setAction(int32_t action);
	virtual void setCommand($String* command);
	virtual void setDescription($String* description);
	virtual void setExtensions($String* extensionString);
	virtual void setImageFileName($String* filename);
	virtual void setType($String* type);
	virtual $String* toProperty();
	virtual $String* toString() override;
	$String* typeName = nullptr;
	$String* tempFileNameTemplate = nullptr;
	int32_t action = 0;
	$String* command = nullptr;
	$String* description = nullptr;
	$String* imageFileName = nullptr;
	$StringArray* fileExtensions = nullptr;
	bool starred = false;
	static const int32_t UNKNOWN = 0;
	static const int32_t LOAD_INTO_BROWSER = 1;
	static const int32_t SAVE_TO_FILE = 2;
	static const int32_t LAUNCH_APPLICATION = 3;
	static $StringArray* actionKeywords;
};

		} // www
	} // net
} // sun

#pragma pop_macro("LAUNCH_APPLICATION")
#pragma pop_macro("LOAD_INTO_BROWSER")
#pragma pop_macro("SAVE_TO_FILE")
#pragma pop_macro("UNKNOWN")

#endif // _sun_net_www_MimeEntry_h_