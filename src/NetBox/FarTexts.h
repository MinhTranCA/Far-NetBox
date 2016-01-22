#pragma once
enum PluginString {

    PLUGIN_NAME,
    PLUGIN_TITLE,

    SESSION_NAME_COL_TITLE,
    NB_STORED_SESSION_TITLE,

    NB_STATUS_CLOSED,
    NB_STATUS_INITWINSOCK,
    NB_STATUS_LOOKUPHOST,
    NB_STATUS_CONNECT,
    NB_STATUS_AUTHENTICATE,
    NB_STATUS_AUTHENTICATED,
    NB_STATUS_STARTUP,
    NB_STATUS_OPEN_DIRECTORY,
    NB_STATUS_READY,

    MSG_TITLE_CONFIRMATION,
    MSG_TITLE_INFORMATION,
    MSG_TITLE_ERROR,
    MSG_TITLE_WARNING,

    MSG_BUTTON_Yes,
    MSG_BUTTON_No,
    MSG_BUTTON_OK,
    MSG_BUTTON_Cancel,
    MSG_BUTTON_Abort,
    MSG_BUTTON_Retry,
    MSG_BUTTON_Ignore,
    MSG_BUTTON_All,
    MSG_BUTTON_NoToAll,
    MSG_BUTTON_YesToAll,
    MSG_BUTTON_Help,
    MSG_BUTTON_Skip,
    MSG_BUTTON_Prev,
    MSG_BUTTON_Next,
    MSG_BUTTON_Append,

    MSG_BUTTON_CLOSE,
    MSG_CHECK_NEVER_ASK_AGAIN,
    MSG_CHECK_NEVER_SHOW_AGAIN,
    MSG_BUTTON_TIMEOUT,

    GROUP_COL_TITLE,
    RIGHTS_COL_TITLE,
    RIGHTS_OCTAL_COL_TITLE,
    LINK_TO_COL_TITLE,

    NEW_SESSION_KEYBAR,
    NEW_SESSION_HINT,
    EXPORT_SESSION_KEYBAR,
    COPY_SESSION_KEYBAR,
    RENAME_SESSION_KEYBAR,
    OPEN_DIRECTORY_KEYBAR,
    COPY_TO_FILE_KEYBAR,
    MOVE_TO_FILE_KEYBAR,
    RENAME_FILE_KEYBAR,

    WARN_FATAL_ERROR,
    CREATE_LOCAL_DIR_ERROR,
    CREATE_LOCAL_DIRECTORY,
    CANCEL_OPERATION2,
    EDIT_MASK_ERROR,
    VIEW_FROM_FIND_NOT_SUPPORTED,
    PENDING_QUEUE_ITEMS,
    GSSAPI_NOT_INSTALLED,
    WATCH_ERROR_DIRECTORY,
    WATCH_ERROR_GENERAL,
    PERFORM_ON_COMMAND_SESSION,
    NO_FILES_SELECTED,
    CREATE_TEMP_DIR_ERROR,
    SAVE_PASSWORD,
    OLD_FAR,
    SAVE_SYNCHRONIZE_MODE,
    SYNCHRONISE_BEFORE_KEEPUPTODATE,
    SYNCHRONIZE_BROWSING_ON,
    SYNCHRONIZE_BROWSING_OFF,
    SYNCHRONIZE_BROWSING_LOCAL_PATH_REQUIRED,
    SYNC_DIR_BROWSE_ERROR,
    SYNC_DIR_BROWSE_CREATE,
    DELETE_LOCAL_FILE_ERROR,
    TOO_MANY_WATCH_DIRECTORIES,
    DIRECTORY_READING_CANCELLED,
    FTP_PASV_MODE_REQUIRED,
    EDITOR_ALREADY_LOADED,

    COPY_PARAM_GROUP,
    TRANSFER_SETTINGS_BUTTON,

    CREATE_FOLDER_TITLE,
    CREATE_FOLDER_PROMPT,
    CREATE_FOLDER_ATTRIBUTES,
    CREATE_FOLDER_SET_RIGHTS,
    CREATE_FOLDER_REUSE_SETTINGS,

    COPY_TITLE,
    COPY_FILE_PROMPT,
    COPY_FILES_PROMPT,
    MOVE_TITLE,
    MOVE_FILE_PROMPT,
    MOVE_FILES_PROMPT,

    READING_DIRECTORY_TITLE,
    CHANGING_DIRECTORY_TITLE,

    DELETE_FILE_CONFIRM,
    DELETE_FILES_CONFIRM,
    RECYCLE_FILE_CONFIRM,
    RECYCLE_FILES_CONFIRM,

    PROGRESS_COPY,
    PROGRESS_MOVE,
    PROGRESS_DELETE,
    PROGRESS_SETPROPERTIES,
    PROGRESS_CALCULATE_SIZE,
    PROGRESS_REMOTE_MOVE,
    PROGRESS_REMOTE_COPY,
    PROGRESS_GETPROPERTIES,
    PROGRESS_CALCULATE_CHECKSUM,

    PROGRESS_FILE_LABEL,
    TARGET_DIR_LABEL,
    START_TIME_LABEL,
    TIME_ELAPSED_LABEL,
    BYTES_TRANSFERED_LABEL,
    CPS_LABEL,
    TIME_LEFT_LABEL,

    CANCEL_OPERATION_FATAL,
    CANCEL_OPERATION,

    NOT_SUPPORTED,
    OPERATION_NOT_SUPPORTED,
    CANNOT_INIT_SESSION,

    SESSION_ALREADY_EXISTS_ERROR,
    NEW_SESSION_NAME_TITLE,
    NEW_SESSION_NAME_PROMPT,
    DELETE_SESSIONS_CONFIRM,
    EXPORT_SESSION_TITLE,
    EXPORT_SESSION_PROMPT,
    EXPORT_SESSIONS_PROMPT,
    IMPORT_SESSIONS_PROMPT,
    IMPORT_SESSIONS_EMPTY,
    DUPLICATE_SESSION_TITLE,
    DUPLICATE_SESSION_PROMPT,
    RENAME_SESSION_TITLE,
    RENAME_SESSION_PROMPT,

    CONFIG_INTERFACE,
    CONFIG_CONFIRMATIONS,
    CONFIG_TRANSFER,
    CONFIG_BACKGROUND,
    CONFIG_ENDURANCE,
    CONFIG_TRANSFER_EDITOR,
    CONFIG_LOGGING,
    CONFIG_ABOUT,
    CONFIG_INTEGRATION,
    CONFIG_PANEL,

    CONFIG_DISKS_MENU,
    CONFIG_PLUGINS_MENU,
    CONFIG_PLUGINS_MENU_COMMANDS,
    CONFIG_HOST_NAME_IN_TITLE,
    CONFIG_COMAND_PREFIXES,
    CONFIG_PANEL_MODE_GROUP,
    CONFIG_PANEL_MODE_CHECK,
    CONFIG_PANEL_MODE_TYPES,
    CONFIG_PANEL_MODE_WIDTHS,
    CONFIG_PANEL_MODE_STATUS_TYPES,
    CONFIG_PANEL_MODE_STATUS_WIDTHS,
    CONFIG_PANEL_MODE_FULL_SCREEN,
    CONFIG_PANEL_MODE_HINT,
    CONFIG_PANEL_MODE_HINT2,
    CONFIG_AUTO_READ_DIRECTORY_AFTER_OP,

    ABOUT_VERSION,
    ABOUT_PRODUCT_VERSION,
    ABOUT_HOMEPAGE,
    ABOUT_FORUM,
    ABOUT_URL,

    LOGIN_EDIT,
    LOGIN_ADD,
    LOGIN_CONNECT,
    LOGIN_CONNECT_BUTTON,
    LOGIN_TAB_SESSION,
    LOGIN_TAB_ENVIRONMENT,
    LOGIN_TAB_DIRECTORIES,
    LOGIN_TAB_SCP,
    LOGIN_TAB_SFTP,
    LOGIN_TAB_FTP,
    LOGIN_TAB_FTPS,
    LOGIN_TAB_SSH,
    LOGIN_TAB_CONNECTION,
    LOGIN_TAB_TUNNEL,
    LOGIN_TAB_PROXY,
    LOGIN_TAB_BUGS,
    LOGIN_TAB_AUTH,
    LOGIN_TAB_KEX,
    LOGIN_TAB_WEBDAV,
    LOGIN_GROUP_SESSION,
    LOGIN_HOST_NAME,
    LOGIN_PORT_NUMBER,
    LOGIN_LOGIN_TYPE,
    LOGIN_LOGIN_TYPE_ANONYMOUS,
    LOGIN_LOGIN_TYPE_NORMAL,
    LOGIN_USER_NAME,
    LOGIN_PASSWORD,
    LOGIN_PRIVATE_KEY,
    LOGIN_GROUP_PROTOCOL,
    LOGIN_TRANSFER_PROTOCOL,
    LOGIN_SCP,
    LOGIN_SFTP,
    LOGIN_FTP,
    LOGIN_WEBDAV,
    LOGIN_ALLOW_SCP_FALLBACK,
    LOGIN_INSECURE,
    LOGIN_TAB_HINT1,
    LOGIN_TAB_HINT2,
    LOGIN_DIRECTORIES_GROUP,
    LOGIN_UPDATE_DIRECTORIES,
    LOGIN_DIRECTORY_OPTIONS_GROUP,
    LOGIN_CACHE_DIRECTORIES,
    LOGIN_CACHE_DIRECTORY_CHANGES,
    LOGIN_PRESERVE_DIRECTORY_CHANGES,
    LOGIN_RESOLVE_SYMLINKS,
    LOGIN_REMOTE_DIRECTORY,
    LOGIN_ENVIRONMENT_GROUP,
    LOGIN_EOL_TYPE,
    LOGIN_DST_MODE_GROUP,
    LOGIN_DST_MODE_UNIX,
    LOGIN_DST_MODE_WIN,
    LOGIN_DST_MODE_KEEP,
    LOGIN_SSH_GROUP,
    LOGIN_COMPRESSION,
    LOGIN_SSH_PROTOCOL_GROUP,
    LOGIN_SSH1_ONLY,
    LOGIN_SSH1,
    LOGIN_SSH2,
    LOGIN_SSH2_ONLY,
    LOGIN_ENCRYPTION_GROUP,
    LOGIN_CIPHER,
    LOGIN_UP,
    LOGIN_DOWN,
    LOGIN_SSH2DES,
    CIPHER_NAME_WARN,
    CIPHER_NAME_3DES,
    CIPHER_NAME_BLOWFISH,
    CIPHER_NAME_AES,
    CIPHER_NAME_DES,
    CIPHER_NAME_ARCFOUR,
    CIPHER_NAME_CHACHA20,
    LOGIN_SHELL_GROUP,
    LOGIN_SHELL_SHELL,
    LOGIN_SHELL_SHELL_DEFAULT,
    LOGIN_SHELL_RETURN_VAR,
    LOGIN_SHELL_RETURN_VAR_AUTODETECT,
    LOGIN_SCP_LS_OPTIONS_GROUP,
    LOGIN_IGNORE_LS_WARNINGS,
    LOGIN_LISTING_COMMAND,
    LOGIN_SCP_LS_FULL_TIME_AUTO,
    LOGIN_SCP_OPTIONS,
    LOGIN_LOOKUP_USER_GROUPS,
    LOGIN_CLEAR_NATIONAL_VARS,
    LOGIN_CLEAR_ALIASES,
    LOGIN_SCP1_COMPATIBILITY,
    LOGIN_TIME_DIFFERENCE,
    LOGIN_TIME_DIFFERENCE_HOURS,
    LOGIN_TIME_DIFFERENCE_MINUTES,
    LOGIN_TIMEOUTS_GROUP,
    LOGIN_TIMEOUT,
    LOGIN_TIMEOUT_SECONDS,
    LOGIN_PING_GROUP,
    LOGIN_PING_OFF,
    LOGIN_PING_NULL_PACKET,
    LOGIN_PING_DUMMY_COMMAND,
    LOGIN_PING_INTERVAL,
    LOGIN_IP_GROUP,
    LOGIN_IP_AUTO,
    LOGIN_IP_V4,
    LOGIN_IP_V6,
    LOGIN_CODE_PAGE,
    LOGIN_PROXY_GROUP,
    LOGIN_PROXY_METHOD,
    LOGIN_PROXY_NONE,
    LOGIN_PROXY_SOCKS4,
    LOGIN_PROXY_SOCKS5,
    LOGIN_PROXY_HTTP,
    LOGIN_PROXY_TELNET,
    LOGIN_PROXY_LOCAL,
    LOGIN_PROXY_SYSTEM,

    LOGIN_PROXY_FTP_SITE,
    LOGIN_PROXY_FTP_PROXYUSER_USERHOST,
    LOGIN_PROXY_FTP_OPEN_HOST,
    LOGIN_PROXY_FTP_PROXYUSER_USERUSER,
    LOGIN_PROXY_FTP_USER_USERHOST,
    LOGIN_PROXY_FTP_PROXYUSER_HOST,
    LOGIN_PROXY_FTP_USERHOST_PROXYUSER,
    LOGIN_PROXY_FTP_USER_USERPROXYUSERHOST,

    LOGIN_PROXY_HOST,
    LOGIN_PROXY_PORT,
    LOGIN_PROXY_USERNAME,
    LOGIN_PROXY_PASSWORD,
    LOGIN_PROXY_SETTINGS_GROUP,
    LOGIN_PROXY_TELNET_COMMAND,
    LOGIN_PROXY_LOCAL_COMMAND,
    LOGIN_PROXY_LOCALHOST,
    LOGIN_PROXY_DNS,
    LOGIN_PROXY_DNS_NO,
    LOGIN_PROXY_DNS_AUTO,
    LOGIN_PROXY_DNS_YES,
    LOGIN_BUGS_GROUP,
    LOGIN_BUGS_IGNORE1,
    LOGIN_BUGS_PLAIN_PW1,
    LOGIN_BUGS_RSA1,
    LOGIN_BUGS_HMAC2,
    LOGIN_BUGS_DERIVE_KEY2,
    LOGIN_BUGS_RSA_PAD2,
    LOGIN_BUGS_PKSESSID2,
    LOGIN_BUGS_REKEY2,
    LOGIN_BUGS_AUTO,
    LOGIN_BUGS_OFF,
    LOGIN_BUGS_ON,
    LOGIN_AUTH_SSH_NO_USER_AUTH,
    LOGIN_AUTH_GROUP,
    LOGIN_AUTH_TRY_AGENT,
    LOGIN_AUTH_TIS, // "Attempt &TIS or CryptoCard authentication (SSH-1)"
    LOGIN_AUTH_KI,
    LOGIN_AUTH_KI_PASSWORD,
    LOGIN_AUTH_AGENT_FWD,
    LOGIN_AUTH_GSSAPI_PARAMS_GROUP,
    LOGIN_AUTH_ATTEMPT_GSSAPI_AUTHENTICATION,
    LOGIN_AUTH_ALLOW_GSSAPI_CREDENTIAL_DELEGATION,
    LOGIN_AUTH_GSSAPI,
    LOGIN_AUTH_GSSAPI_SERVER_REALM,
    LOGIN_AUTH_PARAMS_GROUP,
    LOGIN_RECYCLE_BIN_GROUP,
    LOGIN_RECYCLE_BIN_DELETE,
    LOGIN_RECYCLE_BIN_OVERWRITE,
    LOGIN_RECYCLE_BIN_LABEL,
    LOGIN_SFTP_PROTOCOL_GROUP,
    LOGIN_SFTP_SERVER,
    LOGIN_SFTP_SERVER_DEFAULT,
    LOGIN_SFTP_MAX_VERSION,
    LOGIN_UTF,
    LOGIN_SFTP_BUGS_GROUP,
    LOGIN_SFTP_BUGS_SYMLINK,
    LOGIN_SFTP_BUGS_SIGNED_TS,
    LOGIN_SFTP_MIN_PACKET_SIZE,
    LOGIN_SFTP_MAX_PACKET_SIZE,
    LOGIN_KEX_OPTIONS_GROUP,
    LOGIN_KEX_LIST,
    LOGIN_KEX_REEXCHANGE_GROUP,
    LOGIN_KEX_REKEY_TIME,
    LOGIN_KEX_REKEY_DATA,
    KEX_NAME_WARN,
    KEX_NAME_DHGROUP1,
    KEX_NAME_DHGROUP14,
    KEX_NAME_DHGEX,
    KEX_NAME_GSSGROUP1,
    KEX_NAME_GSSGROUP14,
    KEX_NAME_GSSGEX,
    KEX_NAME_RSA,
    KEX_NAME_ECDH,
    LOGIN_TUNNEL_GROUP,
    LOGIN_TUNNEL_TUNNEL,
    LOGIN_TUNNEL_SESSION_GROUP,
    LOGIN_TUNNEL_OPTIONS_GROUP,
    LOGIN_TUNNEL_LOCAL_PORT_NUMBER,
    LOGIN_TUNNEL_LOCAL_PORT_NUMBER_AUTOASSIGN,
    LOGIN_ENVIRONMENT_UNIX,
    LOGIN_ENVIRONMENT_WINDOWS,
    LOGIN_CONNECTION_GROUP,
    LOGIN_FTP_PASV_MODE,
    LOGIN_SSH_OPTIMIZE_BUFFER_SIZE,
    LOGIN_FTP_ALLOW_EMPTY_PASSWORD,
    LOGIN_FTP_USE_MLSD,
    LOGIN_FTP_GROUP,
    LOGIN_FTP_DUPFF,
    LOGIN_FTP_UNDUPFF,
    LOGIN_FTP_SSLSESSIONREUSE,
    LOGIN_FTP_ENCRYPTION,
    LOGIN_FTP_USE_PLAIN_FTP,
    LOGIN_FTP_REQUIRE_IMPLICIT_FTP,
    LOGIN_FTP_REQUIRE_EXPLICIT_FTP,
    LOGIN_FTP_POST_LOGIN_COMMANDS,

    LOGIN_WEBDAV_GROUP,

    PROPERTIES_CAPTION,
    PROPERTIES_PROMPT,
    PROPERTIES_PROMPT_FILES,
    PROPERTIES_OWNER_RIGHTS,
    PROPERTIES_GROUP_RIGHTS,
    PROPERTIES_OTHERS_RIGHTS,
    PROPERTIES_READ_RIGHTS,
    PROPERTIES_WRITE_RIGHTS,
    PROPERTIES_EXECUTE_RIGHTS,
    PROPERTIES_RIGHTS,
    PROPERTIES_OCTAL,
    PROPERTIES_DIRECTORIES_X,
    PROPERTIES_OWNER,
    PROPERTIES_GROUP,
    PROPERTIES_RECURSIVE,
    PROPERTIES_NONE_RIGHTS,
    PROPERTIES_DEFAULT_RIGHTS,
    PROPERTIES_ALL_RIGHTS,
    PROPERTIES_SETUID_RIGHTS,
    PROPERTIES_SETGID_RIGHTS,
    PROPERTIES_STICKY_BIT_RIGHTS,
    PROPERTIES_LINKTO,

    TRANSFER_MODE_TEXT,
    TRANSFER_MODE_BINARY,
    TRANSFER_MODE_AUTOMATIC,
    TRANSFER_MODE_MASK,
    TRANSFER_MODE,
    TRANSFER_FILENAME_MODIFICATION,
    TRANSFER_FILENAME_NOCHANGE,
    TRANSFER_FILENAME_UPPERCASE,
    TRANSFER_FILENAME_LOWERCASE,
    TRANSFER_FILENAME_FIRSTUPPERCASE,
    TRANSFER_FILENAME_LOWERCASESHORT,
    TRANSFER_FILENAME_REPLACE_INVALID,
    TRANSFER_PRESERVE_RIGHTS,
    TRANSFER_PRESERVE_TIMESTAMP,
    TRANSFER_PRESERVE_READONLY,
    TRANSFER_REUSE_SETTINGS,
    TRANSFER_QUEUE,
    TRANSFER_QUEUE_NO_CONFIRMATION,
    TRANSFER_NEWER_ONLY,
    TRANSFER_CLEAR_ARCHIVE,
    TRANSFER_OTHER,
    TRANSFER_FILE_MASK,
    TRANSFER_EXCLUDE,
    TRANSFER_INCLUDE,
    TRANSFER_UPLOAD_OPTIONS,
    TRANSFER_DOWNLOAD_OPTIONS,
    TRANSFER_COMMON_OPTIONS,
    TRANSFER_PRESERVE_PERM_ERRORS,
    TRANSFER_CALCULATE_SIZE,
    TRANSFER_SPEED,

    STRING_LINK_EDIT_CAPTION,
    STRING_LINK_ADD_CAPTION,
    STRING_LINK_FILE,
    STRING_LINK_POINT_TO,
    STRING_LINK_SYMLINK,

    REMOTE_MOVE_TITLE,
    REMOTE_MOVE_FILE,
    REMOTE_MOVE_FILES,

    REMOTE_COPY_TITLE,
    REMOTE_COPY_FILE,
    REMOTE_COPY_FILES,

    RENAME_FILE_TITLE,
    RENAME_FILE,

    SERVER_PASSWORD_HIDE_TYPING,
    SERVER_PASSWORD_NOTE1,
    SERVER_PASSWORD_NOTE2,
    PASSWORD_SHOW_PROMPT,
    PASSWORD_SAVE,

    LOGGING_ENABLE,
    LOGGING_OPTIONS_GROUP,
    LOGGING_LOG_PROTOCOL,
    LOGGING_LOG_PROTOCOL_0,
    LOGGING_LOG_PROTOCOL_1,
    LOGGING_LOG_PROTOCOL_2,
    LOGGING_LOG_TO_FILE,
    LOGGING_LOG_FILE_APPEND,
    LOGGING_LOG_FILE_OVERWRITE,
    LOGGING_LOG_VIEW_GROUP,
    LOGGING_LOG_VIEW_COMPLETE,
    LOGGING_LOG_VIEW_LINES,
    LOGGING_LOG_VIEW_LINES2,
    LOGGING_LOG_FILE_HINT1,
    LOGGING_LOG_FILE_HINT2,

    CONFIRMATIONS_CONFIRM_OVERWRITING,
    CONFIRMATIONS_CONTINUE_ON_ERROR,
    CONFIRMATIONS_CONFIRM_RESUME,
    CONFIRMATIONS_OPEN_COMMAND_SESSION,
    CONFIRMATIONS_SYNCHRONIZED_BROWSING,

    TRANSFER_RESUME,
    TRANSFER_RESUME_ON,
    TRANSFER_RESUME_SMART,
    TRANSFER_RESUME_THRESHOLD_UNIT,
    TRANSFER_RESUME_OFF,
    TRANSFER_SESSION_REOPEN_GROUP,
    TRANSFER_SESSION_REOPEN_AUTO_LABEL,
    TRANSFER_SESSION_REOPEN_AUTO_LABEL2,
    TRANSFER_SESSION_REOPEN_NUMBER_OF_RETRIES_LABEL,
    TRANSFER_SESSION_REOPEN_NUMBER_OF_RETRIES_LABEL2,

    TRANSFER_EDITOR_DOWNLOAD,
    TRANSFER_EDITOR_DOWNLOAD_DEFAULT,
    TRANSFER_EDITOR_DOWNLOAD_OPTIONS,

    TRANSFER_EDITOR_UPLOAD,
    TRANSFER_EDITOR_UPLOAD_SAME,
    TRANSFER_EDITOR_UPLOAD_OPTIONS,
    TRANSFER_EDITOR_UPLOAD_ON_SAVE,
    TRANSFER_EDITOR_MULTIPLE,

    TRANSFER_QUEUE_LIMIT,
    TRANSFER_QUEUE_DEFAULT,
    TRANSFER_AUTO_POPUP,
    TRANSFER_QUEUE_BEEP,
    TRANSFER_REMEMBER_PASSWORD,

    MENU_COMMANDS,
    MENU_COMMANDS_LOG,
    MENU_COMMANDS_ATTRIBUTES,
    MENU_COMMANDS_LINK,
    MENU_COMMANDS_CONFIGURE,
    MENU_COMMANDS_INFORMATION,
    MENU_COMMANDS_PUTTY,
    MENU_COMMANDS_PUTTYGEN,
    MENU_COMMANDS_PAGEANT,
    MENU_COMMANDS_OPEN_DIRECTORY,
    MENU_COMMANDS_ADD_BOOKMARK,
    MENU_COMMANDS_HOME_DIRECTORY,
    MENU_COMMANDS_APPLY_COMMAND,
    MENU_COMMANDS_CLEAR_CACHES,
    MENU_COMMANDS_FULL_SYNCHRONIZE,
    MENU_COMMANDS_QUEUE,
    MENU_COMMANDS_SYNCHRONIZE,
    MENU_COMMANDS_SYNCHRONIZE_BROWSING,
    MENU_COMMANDS_EDIT_HISTORY,

    SERVER_PROTOCOL_INFORMATION,
    SERVER_INFORMATION_GROUP,
    SERVER_SSH_IMPLEMENTATION,
    SERVER_CIPHER,
    SERVER_COMPRESSION,
    SERVER_FS_PROTOCOL,
    SERVER_HOST_KEY,
    PROTOCOL_INFORMATION_GROUP,
    PROTOCOL_MODE_CHANGING,
    PROTOCOL_OWNER_GROUP_CHANGING,
    PROTOCOL_ANY_COMMAND,
    PROTOCOL_SYMBOLIC_HARD_LINK,
    PROTOCOL_USER_GROUP_LISTING,
    PROTOCOL_REMOTE_COPY,
    PROTOCOL_CHECKING_SPACE_AVAILABLE,
    PROTOCOL_NATIVE_TEXT_MODE,
    PROTOCOL_INFO_GROUP,
    SPACE_AVAILABLE_GROUP,
    SPACE_AVAILABLE_PATH,
    SPACE_AVAILABLE_CHECK_SPACE,
    SPACE_AVAILABLE_BYTES_UNKNOWN,
    SPACE_AVAILABLE_BYTES_ON_DEVICE,
    SPACE_AVAILABLE_UNUSED_BYTES_ON_DEVICE,
    SPACE_AVAILABLE_BYTES_AVAILABLE_TO_USER,
    SPACE_AVAILABLE_UNUSED_BYTES_AVAILABLE_TO_USER,
    SPACE_AVAILABLE_BYTES_PER_ALLOCATION_UNIT,
    SERVER_PROTOCOL_TAB_PROTOCOL,
    SERVER_PROTOCOL_TAB_CAPABILITIES,
    SERVER_PROTOCOL_TAB_SPACE_AVAILABLE,
    SERVER_PROTOCOL_COPY_CLIPBOARD,
    SERVER_REMOTE_SYSTEM,
    SERVER_SESSION_PROTOCOL,
    PROTOCOL_PROTOCOL_ANY_COMMAND,
    PROTOCOL_CALCULATING_CHECKSUM,

    INTEGRATION_PUTTY,
    INTEGRATION_PUTTY_PASSWORD,
    INTEGRATION_PAGEANT,
    INTEGRATION_PUTTYGEN,
    INTEGRATION_TELNET_FOR_FTP_IN_PUTTY,

    OPEN_DIRECTORY_BROWSE_CAPTION,
    OPEN_DIRECTORY_ADD_BOOMARK_ACTION,
    OPEN_DIRECTORY_REMOVE,
    OPEN_DIRECTORY_UP,
    OPEN_DIRECTORY_DOWN,
    OPEN_DIRECTORY_HELP,

    APPLY_COMMAND_TITLE,
    APPLY_COMMAND_PROMPT,
    APPLY_COMMAND_APPLY_TO_DIRECTORIES,
    APPLY_COMMAND_RECURSIVE,
    APPLY_COMMAND_HINT1,
    APPLY_COMMAND_HINT2,
    APPLY_COMMAND_HINT3,
    APPLY_COMMAND_HINT4,
    APPLY_COMMAND_HINT5,
    APPLY_COMMAND_HINT_LOCAL,
    APPLY_COMMAND_PARAM_TITLE,
    APPLY_COMMAND_PARAM_PROMPT,
    APPLY_COMMAND_REMOTE_COMMAND,
    APPLY_COMMAND_LOCAL_COMMAND,
    APPLY_COMMAND_SHOW_RESULTS,
    APPLY_COMMAND_COPY_RESULTS,
    CUSTOM_COMMAND_SELECTED_UNMATCH,
    CUSTOM_COMMAND_SELECTED_UNMATCH1,
    CUSTOM_COMMAND_PAIRS_DOWNLOAD_FAILED,
    APPLY_COMMAND_LOCAL_PATH_REQUIRED,

    SYNCHRONIZE_LOCAL_PATH_REQUIRED,
    COMPARE_NO_DIFFERENCES,
    FULL_SYNCHRONIZE_TITLE,
    FULL_SYNCHRONIZE_LOCAL_LABEL,
    FULL_SYNCHRONIZE_REMOTE_LABEL,
    FULL_SYNCHRONIZE_DIRECTION_GROUP,
    FULL_SYNCHRONIZE_LOCAL,
    FULL_SYNCHRONIZE_REMOTE,
    FULL_SYNCHRONIZE_BOTH,
    FULL_SYNCHRONIZE_MODE_GROUP,
    FULL_SYNCHRONIZE_GROUP,
    FULL_SYNCHRONIZE_CRITERIONS_GROUP,
    SYNCHRONIZE_SYNCHRONIZE_FILES,
    SYNCHRONIZE_MIRROR_FILES,
    SYNCHRONIZE_SYNCHRONIZE_TIMESTAMPS,
    SYNCHRONIZE_DELETE,
    SYNCHRONIZE_NO_CONFIRMATION,
    SYNCHRONIZE_EXISTING_ONLY,
    SYNCHRONIZE_REUSE_SETTINGS,
    SYNCHRONIZE_PREVIEW_CHANGES,
    SYNCHRONIZE_SYNCHRONIZE,
    SYNCHRONIZE_BY_TIME,
    SYNCHRONIZE_BY_SIZE,
    SYNCHRONIZE_SELECTED_ONLY,
    SYNCHRONIZE_SAME_SIZE,

    SYNCHRONIZE_TITLE,
    SYNCHRONIZE_SYCHRONIZING,
    SYNCHRONIZE_LOCAL_LABEL,
    SYNCHRONIZE_REMOTE_LABEL,
    SYNCHRONIZE_RECURSIVE,
    SYNCHRONIZE_GROUP,
    SYNCHRONIZE_START_BUTTON,
    SYNCHRONIZE_STOP_BUTTON,

    SYNCHRONIZE_PROGRESS_TITLE,
    SYNCHRONIZE_PROGRESS_COMPARE_TITLE,
    SYNCHRONIZE_PROGRESS_LOCAL,
    SYNCHRONIZE_PROGRESS_REMOTE,
    SYNCHRONIZE_PROGRESS_START_TIME,
    SYNCHRONIZE_PROGRESS_ELAPSED,

    COPY_PARAM_CUSTOM_TITLE,

    QUEUE_TITLE,
    QUEUE_HEADER,
    QUEUE_SHOW,
    QUEUE_EXECUTE,
    QUEUE_DELETE,
    QUEUE_MOVE_UP,
    QUEUE_MOVE_DOWN,
    QUEUE_CLOSE,
    QUEUE_PAUSE,
    QUEUE_RESUME,
    QUEUE_COPY,
    QUEUE_MOVE,
    QUEUE_DOWNLOAD,
    QUEUE_UPLOAD,
    QUEUE_CONNECTING,
    QUEUE_QUERY,
    QUEUE_ERROR,
    QUEUE_PROMPT,
    QUEUE_PENDING,
    QUEUE_PENDING_ITEMS,
    QUEUE_CALCULATING_SIZE,
    QUEUE_PAUSED,

    BANNER_TITLE,
    BANNER_NEVER_SHOW_AGAIN,
    BANNER_CONTINUE,

    CHECKLIST_TITLE,
    CHECKLIST_HEADER,
    CHECKLIST_ACTIONS,
    CHECKLIST_CHECKED,
    CHECKLIST_CHECK_ALL,
    CHECKLIST_UNCHECK_ALL,
    CHECKLIST_MAXIMIZE,
    CHECKLIST_RESTORE,

    EDITOR_CURRENT,
    EDITOR_NEW_INSTANCE,
    EDITOR_NEW_INSTANCE_RO,

    CREATING_FOLDER,

    MENU_EDIT_HISTORY,

    IMPORTED_SESSIONS_INFO,

    StringTitle,

    StringOK,
    StringCancel,

    StringSession,
    StringProxy,

    //Edit link dialog
    StringEdCrtTitle,
    StringEdEdtTitle,
    StringEdName,
    StringEdURL,
    StringEdCP,
    StringEdAuth,
    StringEdAuthUser,
    StringEdAuthPsw,
    StringEdAuthPromptPsw,
    StringEdAuthShowPsw,
    StringEdAuthCert,
    StringEdErrURLEmpty,
    StringEdErrURLInvalid,
    StringEdErrNameEmpty,
    StringEdErrNameInvalid,

    //Configure menu
    StringSettingsMenuTitle,
    StringMainSettingsMenuTitle,
    StringProxySettingsMenuTitle,
    StringLoggingSettingsMenuTitle,
    StringAboutMenuTitle,

    //Main configure dialog
    StringCfgAddToDM,
    StringCfgAddToPM,
    StringCfgUseOwnKey,
    StringCfgPrefix,
    StringCfgAltPrefixes,
    StringCfgTimeout,
    StringCfgSessionsPath,

    //Proxy configure dialog
    StringProxySettingsDialogTitle,
    StringProxySettingsProxyType,
    proxyTypeItem1,
    proxyTypeItem2,
    proxyTypeItem3,
    proxyTypeItem4,

    StringProxySettingsProxyHost,
    StringProxySettingsProxyPort,
    StringProxySettingsProxyLogin,
    StringProxySettingsProxyPassword,

    //Logging configure dialog
    StringLoggingDialogTitle,
    StringLoggingDialogEnableLogging,
    StringLoggingOptionsSeparatorTitle,
    StringLoggingOptionsLevel,
    StringLoggingOptionsLevelItem1,
    StringLoggingOptionsLevelItem2,
    StringLoggingDialogLogToFile,
    StringLogFileName,

    //About menu
    StringAboutDialogTitle,
    StringPluginDescriptionText,
    StringPluginVersion,
    StringPluginDescriptionClose,

    //Prompt to crypto key
    StringSessionPwd,

    //Create directory dialog
    StringMKDirTitle,
    StringMKDirName,

    //Delete items dialog
    StringDelTitle,
    StringDelQuestion,
    StringDelQuestSession,
    StringDelQuestFolder,
    StringDelQuestFile,
    StringDelSelected,
    StringDelBtnDelete,

    //Copy dialog
    StringCopyTitle,
    StringCopyPath,
    StringCopySelected,
    StringCopyBtnCopy,

    //Move dialog
    StringMoveTitle,
    StringMovePath,
    StringMoveSelected,
    StringMoveBtnCopy,

    //Progress titles
    StringPrgConnect,
    StringPrgChangeDir,
    StringPrgGetList,
    StringPrgRcvFile,
    StringPrgSendFile,
    StringPrgTo,
    StringPrgDelete,

    //Error messages
    StringErrKeyFile,
    StringErrEstablish,
    StringErrCreateDir,
    StringErrChangeDir,
    StringErrListDir,
    StringErrCopyFile,
    StringErrRenameMove,
    StringErrDeleteFile,
    StringErrDeleteDir,

    StringOperationCanceledByUser,

    StringCreateNewSessionItem,

    StringSSLErrorContinue,

  // TextCore1.rc
  MSG_CORE_ERROR_STRINGS,
  MSG_KEY_NOT_VERIFIED,
  MSG_CONNECTION_FAILED,
  MSG_USER_TERMINATED,
  MSG_LOST_CONNECTION,
  MSG_CANT_DETECT_RETURN_CODE,
  MSG_COMMAND_FAILED,
  MSG_COMMAND_FAILED_CODEONLY,
  MSG_INVALID_OUTPUT_ERROR,
  MSG_READ_CURRENT_DIR_ERROR,
  MSG_SKIP_STARTUP_MESSAGE_ERROR,
  MSG_CHANGE_DIR_ERROR,
  MSG_LIST_DIR_ERROR,
  MSG_LIST_LINE_ERROR,
  MSG_RIGHTS_ERROR,
  MSG_CLEANUP_CONFIG_ERROR,
  MSG_CLEANUP_HOSTKEYS_ERROR,
  MSG_CLEANUP_SEEDFILE_ERROR,
  MSG_CLEANUP_SESSIONS_ERROR,
  MSG_DETECT_RETURNVAR_ERROR,
  MSG_LOOKUP_GROUPS_ERROR,
  MSG_FILE_NOT_EXISTS,
  MSG_CANT_GET_ATTRS,
  MSG_OPENFILE_ERROR,
  MSG_READ_ERROR,
  MSG_COPY_FATAL,
  MSG_TOREMOTE_COPY_ERROR,
  MSG_TOLOCAL_COPY_ERROR,
  MSG_SCP_EMPTY_LINE,
  MSG_SCP_ILLEGAL_TIME_FORMAT,
  MSG_SCP_INVALID_CONTROL_RECORD,
  MSG_COPY_ERROR,
  MSG_SCP_ILLEGAL_FILE_DESCRIPTOR,
  MSG_NOT_DIRECTORY_ERROR,
  MSG_CREATE_DIR_ERROR,
  MSG_CREATE_FILE_ERROR,
  MSG_WRITE_ERROR,
  MSG_CANT_SET_ATTRS,
  MSG_REMOTE_ERROR,
  MSG_DELETE_FILE_ERROR,
  MSG_LOG_GEN_ERROR,
  MSG_LOG_OPENERROR,
  MSG_RENAME_FILE_ERROR,
  MSG_RENAME_CREATE_FILE_EXISTS,
  MSG_RENAME_CREATE_DIR_EXISTS,
  MSG_CHANGE_HOMEDIR_ERROR,
  MSG_UNALIAS_ALL_ERROR,
  MSG_UNSET_NATIONAL_ERROR,
  MSG_FIRST_LINE_EXPECTED,
  MSG_CLEANUP_INIFILE_ERROR,
  MSG_AUTHENTICATION_LOG,
  MSG_AUTHENTICATION_FAILED,
  MSG_NOT_CONNECTED,
  MSG_SAVE_KEY_ERROR,
  MSG_SSH_EXITCODE,
  MSG_SFTP_INVALID_TYPE,
  MSG_SFTP_VERSION_NOT_SUPPORTED,
  MSG_SFTP_MESSAGE_NUMBER,
  MSG_SFTP_STATUS_OK,
  MSG_SFTP_STATUS_EOF,
  MSG_SFTP_STATUS_NO_SUCH_FILE,
  MSG_SFTP_STATUS_PERMISSION_DENIED,
  MSG_SFTP_STATUS_FAILURE,
  MSG_SFTP_STATUS_BAD_MESSAGE,
  MSG_SFTP_STATUS_NO_CONNECTION,
  MSG_SFTP_STATUS_CONNECTION_LOST,
  MSG_SFTP_STATUS_OP_UNSUPPORTED,
  MSG_SFTP_ERROR_FORMAT3,
  MSG_SFTP_STATUS_UNKNOWN,
  MSG_READ_SYMLINK_ERROR,
  MSG_EMPTY_DIRECTORY,
  MSG_SFTP_NON_ONE_FXP_NAME_PACKET,
  MSG_SFTP_REALPATH_ERROR,
  MSG_CHANGE_PROPERTIES_ERROR,
  MSG_SFTP_INITIALIZE_ERROR,
  MSG_TIMEZONE_ERROR,
  MSG_SFTP_CREATE_FILE_ERROR,
  MSG_SFTP_OPEN_FILE_ERROR,
  MSG_SFTP_CLOSE_FILE_ERROR,
  MSG_NOT_FILE_ERROR,
  MSG_RENAME_AFTER_RESUME_ERROR,
  MSG_CREATE_LINK_ERROR,
  MSG_INVALID_SHELL_COMMAND,
  MSG_SFTP_SERVER_MESSAGE_UNSUPPORTED,
  MSG_INVALID_OCTAL_PERMISSIONS,
  MSG_SFTP_INVALID_EOL,
  MSG_SFTP_UNKNOWN_FILE_TYPE,
  MSG_SFTP_STATUS_INVALID_HANDLE,
  MSG_SFTP_STATUS_NO_SUCH_PATH,
  MSG_SFTP_STATUS_FILE_ALREADY_EXISTS,
  MSG_SFTP_STATUS_WRITE_PROTECT,
  MSG_SFTP_STATUS_NO_MEDIA,
  MSG_DECODE_UTF_ERROR,
  MSG_CUSTOM_COMMAND_ERROR,
  MSG_LOCALE_LOAD_ERROR,
  MSG_SFTP_INCOMPLETE_BEFORE_EOF,
  MSG_CALCULATE_SIZE_ERROR,
  MSG_SFTP_PACKET_TOO_BIG,
  MSG_SCP_INIT_ERROR,
  MSG_DUPLICATE_BOOKMARK,
  MSG_MOVE_FILE_ERROR,
  MSG_SFTP_PACKET_TOO_BIG_INIT_EXPLAIN,
  MSG_PRESERVE_TIME_PERM_ERROR3,
  MSG_ACCESS_VIOLATION_ERROR3,
  MSG_SFTP_STATUS_NO_SPACE_ON_FILESYSTEM,
  MSG_SFTP_STATUS_QUOTA_EXCEEDED,
  MSG_SFTP_STATUS_UNKNOWN_PRINCIPAL,
  MSG_COPY_FILE_ERROR,
  MSG_CUSTOM_COMMAND_UNTERMINATED,
  MSG_CUSTOM_COMMAND_UNKNOWN,
  MSG_CUSTOM_COMMAND_FILELIST_ERROR,

  MSG_UNKNOWN_SOCKET_STATUS,
  MSG_DELETE_ON_RESUME_ERROR,
  MSG_SFTP_PACKET_ERROR,
  MSG_ITEM_NAME_INVALID,
  MSG_SFTP_STATUS_LOCK_CONFLICT,
  MSG_SFTP_STATUS_DIR_NOT_EMPTY,
  MSG_SFTP_STATUS_NOT_A_DIRECTORY,
  MSG_SFTP_STATUS_INVALID_FILENAME,
  MSG_SFTP_STATUS_LINK_LOOP,
  MSG_SFTP_STATUS_CANNOT_DELETE,
  MSG_SFTP_STATUS_INVALID_PARAMETER,
  MSG_SFTP_STATUS_FILE_IS_A_DIRECTORY,
  MSG_SFTP_STATUS_BYTE_RANGE_LOCK_CONFLICT,
  MSG_SFTP_STATUS_BYTE_RANGE_LOCK_REFUSED,
  MSG_SFTP_STATUS_DELETE_PENDING,
  MSG_SFTP_STATUS_FILE_CORRUPT,
  MSG_KEY_TYPE_UNKNOWN2,
  MSG_KEY_TYPE_UNSUPPORTED2,
  MSG_KEY_TYPE_DIFFERENT_SSH,
  MSG_SFTP_OVERWRITE_FILE_ERROR2,
  MSG_SFTP_OVERWRITE_DELETE_BUTTON,
  MSG_SPACE_AVAILABLE_ERROR,
  MSG_TUNNEL_NO_FREE_PORT,
  MSG_EVENT_SELECT_ERROR,
  MSG_UNEXPECTED_CLOSE_ERROR,
  MSG_TUNNEL_ERROR,
  MSG_CHECKSUM_ERROR,
  MSG_INTERNAL_ERROR,
  MSG_FZ_NOTSUPPORTED,
  MSG_FTP_ACCESS_DENIED,
  MSG_FTP_CREDENTIAL_PROMPT,
  MSG_FTP_RESPONSE_ERROR,
  MSG_FTP_UNSUPPORTED,

  MSG_TRANSFER_ERROR,
  MSG_EXECUTE_APP_ERROR,
  MSG_FILE_NOT_FOUND,
  MSG_DOCUMENT_WAIT_ERROR,
  MSG_SPEED_INVALID,
  MSG_CERT_ERR_DEPTH_ZERO_SELF_SIGNED_CERT,
  MSG_CERT_ERR_ERROR_IN_CERT_NOT_AFTER_FIELD,
  MSG_CERT_ERR_ERROR_IN_CERT_NOT_BEFORE_FIELD,
  MSG_CERT_ERR_INVALID_CA,
  MSG_CERT_ERR_INVALID_PURPOSE,
  MSG_CERT_ERR_KEYUSAGE_NO_CERTSIGN,
  MSG_CERT_ERR_PATH_LENGTH_EXCEEDED,
  MSG_CERT_ERR_SELF_SIGNED_CERT_IN_CHAIN,
  MSG_CERT_ERR_UNABLE_TO_DECODE_ISSUER_PUBLIC_KEY,
  MSG_CERT_ERR_UNABLE_TO_DECRYPT_CERT_SIGNATURE,
  MSG_CERT_ERR_UNABLE_TO_GET_ISSUER_CERT,
  MSG_CERT_ERR_UNABLE_TO_GET_ISSUER_CERT_LOCALLY,
  MSG_CERT_ERR_UNABLE_TO_VERIFY_LEAF_SIGNATURE,
  MSG_CERT_ERR_UNKNOWN,
  MSG_CERT_ERRDEPTH,
  MSG_MASK_ERROR,
  MSG_FTP_CANNOT_OPEN_ACTIVE_CONNECTION2,
  MSG_CORE_DELETE_LOCAL_FILE_ERROR,
  MSG_URL_OPTION_BOOL_VALUE_ERROR,
  MSG_FTP_ACCESS_DENIED_EMPTY_PASSWORD,

  MSG_NET_TRANSL_NO_ROUTE2,
  MSG_NET_TRANSL_CONN_ABORTED,
  MSG_NET_TRANSL_HOST_NOT_EXIST2,
  MSG_NET_TRANSL_PACKET_GARBLED,
  MSG_REPORT_ERROR,
  MSG_TLS_CERT_DECODE_ERROR,
  MSG_FIND_FILE_ERROR,
  MSG_CERT_NAME_MISMATCH,

  MSG_CERT_ERR_BAD_CHAIN,
  MSG_CERT_OK,
  MSG_CERT_ERR_CERT_CHAIN_TOO_LONG,
  MSG_CERT_ERR_CERT_HAS_EXPIRED,
  MSG_CERT_ERR_CERT_NOT_YET_VALID,
  MSG_CERT_ERR_CERT_REJECTED,
  MSG_CERT_ERR_CERT_SIGNATURE_FAILURE,
  MSG_CERT_ERR_CERT_UNTRUSTED,
  MSG_REQUEST_REDIRECTED,
  MSG_TOO_MANY_REDIRECTS,
  MSG_REDIRECT_LOOP,
  MSG_INVALID_URL,
  MSG_PROXY_AUTHENTICATION_FAILED,
  MSG_CONFIGURED_KEY_NOT_MATCH,
  MSG_SFTP_STATUS_OWNER_INVALID,
  MSG_SFTP_STATUS_GROUP_INVALID,
  MSG_SFTP_STATUS_NO_MATCHING_BYTE_RANGE_LOCK,
  MSG_KEY_TYPE_UNOPENABLE,
  MSG_UNKNOWN_CHECKSUM,
  MSG_CIPHER_NOT_VERIFIED,
  MSG_KEX_NOT_VERIFIED,
  MSG_SFTP_STATUS_4,
  MSG_CERTIFICATE_OPEN_ERROR,
  MSG_CERTIFICATE_READ_ERROR,
  MSG_CERTIFICATE_DECODE_ERROR_INFO,
  MSG_CERTIFICATE_DECODE_ERROR,
  MSG_CERTIFICATE_PUBLIC_KEY_NOT_FOUND,
  MSG_LOCK_FILE_ERROR,
  MSG_UNLOCK_FILE_ERROR,
  MSG_NOT_LOCKED,
  MSG_KEY_SAVE_ERROR,
  MSG_NEON_INIT_FAILED,
  MSG_SCRIPT_AMBIGUOUS_SLASH_IN_PATH,
  MSG_CERT_IP_CANNOT_VERIFY,
  MSG_HOSTKEY_NOT_CONFIGURED,
  MSG_UNENCRYPTED_REDIRECT,
  MSG_HTTP_ERROR,
  MSG_FILEZILLA_SITE_MANAGER_NOT_FOUND,
  MSG_FILEZILLA_NO_SITES,
  MSG_FILEZILLA_SITE_NOT_EXIST,
  MSG_SFTP_AS_FTP_ERROR,

  MSG_CORE_CONFIRMATION_STRINGS,
  MSG_CONFIRM_PROLONG_TIMEOUT3,
  MSG_PROMPT_KEY_PASSPHRASE,
  MSG_PROMPT_FILE_OVERWRITE,
  MSG_DIRECTORY_OVERWRITE,
  MSG_CIPHER_BELOW_TRESHOLD,
  MSG_CIPHER_TYPE_BOTH,
  MSG_CIPHER_TYPE_CS,
  MSG_CIPHER_TYPE_SC,
  MSG_RESUME_TRANSFER2,
  MSG_PARTIAL_BIGGER_THAN_SOURCE,
  MSG_APPEND_OR_RESUME2,
  MSG_FILE_OVERWRITE_DETAILS,
  MSG_READ_ONLY_OVERWRITE,
  MSG_LOCAL_FILE_OVERWRITE2,
  MSG_REMOTE_FILE_OVERWRITE2,
  MSG_TIMEOUT_STILL_WAITING3,
  MSG_KEX_BELOW_TRESHOLD,
  MSG_RECONNECT_BUTTON,
  MSG_RENAME_BUTTON,
  MSG_TUNNEL_SESSION_NAME,
  MSG_PASSWORD_TITLE,
  MSG_PASSPHRASE_TITLE,
  MSG_SERVER_PROMPT_TITLE,
  MSG_USERNAME_TITLE,
  MSG_USERNAME_PROMPT2,
  MSG_SERVER_PROMPT_TITLE2,
  MSG_NEW_PASSWORD_TITLE,
  MSG_PROMPT_PROMPT,
  MSG_TIS_INSTRUCTION,
  MSG_CRYPTOCARD_INSTRUCTION,
  MSG_PASSWORD_PROMPT,
  MSG_KEYBINTER_INSTRUCTION,
  MSG_NEW_PASSWORD_CURRENT_PROMPT,
  MSG_NEW_PASSWORD_NEW_PROMPT,
  MSG_NEW_PASSWORD_CONFIRM_PROMPT,
  MSG_TUNNEL_INSTRUCTION,
  MSG_RENAME_TITLE,
  MSG_RENAME_PROMPT2,
  MSG_VERIFY_CERT_PROMPT3,
  MSG_VERIFY_CERT_CONTACT,
  MSG_VERIFY_CERT_CONTACT_LIST,
  MSG_CERT_TEXT,
  MSG_CERTIFICATE_PASSPHRASE_PROMPT,
  MSG_CERTIFICATE_PASSPHRASE_TITLE,
  MSG_KEY_TYPE_CONVERT3,
  MSG_MULTI_FILES_TO_ONE,

  MSG_CORE_INFORMATION_STRINGS,
  MSG_YES_STR,
  MSG_NO_STR,
  MSG_SESSION_INFO_TIP2,
  MSG_VERSION2,
  MSG_CLOSED_ON_COMPLETION,
  MSG_SFTP_PROTOCOL_NAME2,
  MSG_FS_RENAME_NOT_SUPPORTED,
  MSG_SFTP_NO_EXTENSION_INFO,
  MSG_SFTP_EXTENSION_INFO,
  MSG_APPEND_BUTTON,
  MSG_YES_TO_NEWER_BUTTON,

  MSG_SKIP_ALL_BUTTON,

  MSG_COPY_PARAM_PRESET_ASCII,
  MSG_COPY_PARAM_PRESET_BINARY,
  MSG_COPY_PARAM_PRESET_EXCLUDE,
  MSG_COPY_INFO_TRANSFER_TYPE2,
  MSG_COPY_INFO_FILENAME,
  MSG_COPY_INFO_PERMISSIONS,
  MSG_COPY_INFO_ADD_X_TO_DIRS,
  MSG_COPY_INFO_TIMESTAMP,
  MSG_COPY_INFO_FILE_MASK,
  MSG_COPY_INFO_CLEAR_ARCHIVE,
  MSG_COPY_INFO_DONT_REPLACE_INV_CHARS,
  MSG_COPY_INFO_DONT_PRESERVE_TIME,
  MSG_COPY_INFO_DONT_CALCULATE_SIZE,
  MSG_COPY_INFO_DEFAULT,
  MSG_COPY_RULE_HOSTNAME,
  MSG_COPY_RULE_USERNAME,
  MSG_COPY_RULE_REMOTE_DIR,
  MSG_COPY_RULE_LOCAL_DIR,
  MSG_SYNCHRONIZE_SCAN,
  MSG_SYNCHRONIZE_START,
  MSG_SYNCHRONIZE_CHANGE,
  MSG_SYNCHRONIZE_UPLOADED,
  MSG_SYNCHRONIZE_DELETED,
  MSG_COPY_INFO_NOT_USABLE,
  MSG_COPY_INFO_IGNORE_PERM_ERRORS,
  MSG_AUTH_TRANSL_USERNAME,
  MSG_AUTH_TRANSL_KEYB_INTER,
  MSG_AUTH_TRANSL_PUBLIC_KEY,
  MSG_AUTH_TRANSL_WRONG_PASSPHRASE,
  MSG_AUTH_TRANSL_ACCESS_DENIED,
  MSG_AUTH_TRANSL_PUBLIC_KEY_AGENT,
  MSG_AUTH_TRANSL_TRY_PUBLIC_KEY,
  MSG_AUTH_PASSWORD,
  MSG_OPEN_TUNNEL,
  MSG_NETBOX_STATUS_CLOSED,
  MSG_STATUS_LOOKUPHOST,
  MSG_STATUS_CONNECT,
  MSG_STATUS_AUTHENTICATE,
  MSG_STATUS_AUTHENTICATED,
  MSG_STATUS_STARTUP,
  MSG_STATUS_READY,
  MSG_STATUS_OPEN_DIRECTORY,
  MSG_USING_TUNNEL,
  MSG_AUTH_TRANSL_KEY_REFUSED,
  MSG_PFWD_TRANSL_ADMIN,
  MSG_PFWD_TRANSL_CONNECT,
  MSG_NET_TRANSL_REFUSED2,
  MSG_NET_TRANSL_RESET,
  MSG_NET_TRANSL_TIMEOUT2,
  MSG_SESSION_INFO_TIP_NO_SSH,
  MSG_RESUME_BUTTON,
  MSG_FTP_NO_FEATURE_INFO,
  MSG_FTP_FEATURE_INFO,
  MSG_COPY_INFO_CPS_LIMIT2,
  MSG_COPY_KEY_BUTTON,
  MSG_UPDATE_KEY_BUTTON,
  MSG_ADD_KEY_BUTTON,
  MSG_COPY_INFO_PRESERVE_READONLY,

  MSG_SPEED_UNLIMITED,
  MSG_FTPS_IMPLICIT,
  MSG_FTPS_EXPLICIT,

  MSG_HOSTKEY,

  MSG_COPY_PARAM_NEWER_ONLY,
  MSG_FTP_SUGGESTION,

  MSG_ANY_HOSTKEY,
  MSG_ANY_CERTIFICATE,

  MSG_COPY_INFO_REMOVE_CTRLZ,
  MSG_COPY_INFO_REMOVE_BOM,

  MSG_VERSION_BUILD,
  MSG_VERSION_DEV_BUILD,
  MSG_VERSION_DEBUG_BUILD,
  MSG_VERSION_DONT_DISTRIBUTE,
  MSG_WEBDAV_EXTENSION_INFO,
  MSG_COPY_PARAM_PRESET_EXCLUDE_ALL_DIR,
  MSG_SCRIPT_CHECKSUM_DESC,
  MSG_CLIENT_CERTIFICATE_LOADING,
  MSG_NEED_CLIENT_CERTIFICATE,
  MSG_LOCKED,
  MSG_EXECUTABLE,
  MSG_SCRIPT_CMDLINE_PARAMETERS,
  MSG_SCRIPTING_USE_HOSTKEY,
  MSG_SCRIPT_SITE_WARNING,
  MSG_CODE_SESSION_OPTIONS,
  MSG_CODE_CONNECT,
  MSG_CODE_YOUR_CODE,
  MSG_CODE_PS_ADD_TYPE,
  MSG_COPY_INFO_PRESERVE_TIME_DIRS,

  MSG_CORE_VARIABLE_STRINGS,
  MSG_PUTTY_BASED_ON,
  MSG_PUTTY_VERSION,
  MSG_PUTTY_COPYRIGHT,
  MSG_PUTTY_URL,
  MSG_FILEZILLA_BASED_ON2,
  MSG_FILEZILLA_VERSION,
  MSG_FILEZILLA_COPYRIGHT2,
  MSG_FILEZILLA_URL,
  MSG_OPENSSL_BASED_ON,
  MSG_OPENSSL_COPYRIGHT2,
  MSG_OPENSSL_VERSION,
  MSG_OPENSSL_URL,
  MSG_NEON_BASED_ON,
  MSG_NEON_COPYRIGHT,
  MSG_NEON_URL,
  MSG_EXPAT_BASED_ON,
  MSG_EXPAT_COPYRIGHT,
  MSG_EXPAT_URL,
  MSG_PUTTY_LICENSE_URL,
  MSG_MAIN_MSG_TAG,
  MSG_INTERACTIVE_MSG_TAG,

  MSG_WINSCPFAR_NAME,
  MSG_WINSCP_VERSION,
  MSG_WINSCPFAR_VERSION,
  MSG_WINSCPFAR_BASED_ON,
  MSG_WINSCPFAR_BASED_VERSION,
  MSG_WINSCPFAR_BASED_COPYRIGHT,

  // TextsCore2.rc
  MSG_UNKNOWN_KEY3,
  MSG_DIFFERENT_KEY4,
  MSG_OLD_KEY,

  // rtlconsts.rc
  MSG_SDuplicateString,

  MSG_SListCountError,
  MSG_SListIndexError,

  MSG_SMemoryStreamError,

  MSG_SReadError,

  MSG_SSortedListError,

  MSG_STimeEncodeError,

  MSG_SWriteError,

  MSG_SNotImplemented,
  MSG_SOSError,
  MSG_SUnkOSError,

  MSG_SDateEncodeError,

  MSG_IDS_ERRORMSG_TIMEOUT,
  MSG_IDS_STATUSMSG_DISCONNECTED,

  MSG_CONVERTKEY_SAVE_TITLE, // "Save converted private key"
  MSG_CONVERTKEY_SAVE_FILTER, // "PuTTY Private Key Files (*.ppk)|*.ppk|All files (*.*)|*.*"
  MSG_CONVERTKEY_SAVED, // "Private key was converted and saved to '%s'."
  
  MSG_STACK_TRACE, // "Stack trace:"
};
