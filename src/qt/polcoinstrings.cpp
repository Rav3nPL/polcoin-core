

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *polcoin_strings[] = {
QT_TRANSLATE_NOOP("polcoin-core", ""
"(1 = keep tx meta data e.g. account owner and payment request information, 2 "
"= drop tx meta data)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Allow JSON-RPC connections from specified source. Valid for <ip> are a "
"single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
"a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"An error occurred while setting up the RPC address %s port %u for listening: "
"%s"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Bind to given address and always listen on it. Use [host]:port notation for "
"IPv6"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Bind to given address and whitelist peers connecting to it. Use [host]:port "
"notation for IPv6"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Bind to given address to listen for JSON-RPC connections. Use [host]:port "
"notation for IPv6. This option can be specified multiple times (default: "
"bind to all interfaces)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Cannot obtain a lock on data directory %s. Polcoin Core is probably already "
"running."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Continuously rate-limit free transactions to <n>*1000 bytes per minute "
"(default:%u)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Create new files with system default permissions, instead of umask 077 (only "
"effective with disabled wallet functionality)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Delete all wallet transactions and only recover those parts of the "
"blockchain through -rescan on startup"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Distributed under the MIT software license, see the accompanying file "
"COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Enter regression test mode, which uses a special chain in which blocks can "
"be solved instantly."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Error: Listening for incoming connections failed (listen returned error %s)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Error: Unsupported argument -socks found. Setting SOCKS version isn't "
"possible anymore, only SOCKS5 proxies are supported."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Execute command when a relevant alert is received or we see a really long "
"fork (%s in cmd is replaced by message)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Fees (in PLC/Kb) smaller than this are considered zero fee for relaying "
"(default: %s)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Fees (in PLC/Kb) smaller than this are considered zero fee for transaction "
"creation (default: %s)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Flush database activity from memory pool to disk log every <n> megabytes "
"(default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"How thorough the block verification of -checkblocks is (0-4, default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"If paytxfee is not set, include enough fee so transactions begin "
"confirmation on average within n blocks (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"In this mode -genproclimit controls how many blocks are generated "
"immediately."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
"fee of %s to prevent stuck transactions)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Log transaction priority and fee per kB when mining blocks (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Maintain a full transaction index, used by the getrawtransaction rpc call "
"(default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Maximum size of data in data carrier transactions we relay and mine "
"(default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Maximum total fees to use in a single wallet transaction, setting too low "
"may abort large transactions (default: %s)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Output debugging information (default: %u, supplying <category> is optional)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
"unless -connect)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Require high priority for relaying free or low-fee transactions (default:%u)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
"leave that many cores free, default: %d)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Set the number of threads for coin generation if enabled (-1 = all cores, "
"default: %d)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"This is a pre-release test build - use at your own risk - do not use for "
"mining or merchant applications"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"This product includes software developed by the OpenSSL Project for use in "
"the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
"written by Eric Young and UPnP software written by Thomas Bernard."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"To use polcoind, or the -server option to polcoin-qt, you must set an "
"rpcpassword in the configuration file:\n"
"%s\n"
"It is recommended you use the following random password:\n"
"rpcuser=polcoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"
"It is also recommended to set alertnotify so you are notified of problems;\n"
"for example: alertnotify=echo %%s | mail -s \"Polcoin Alert\" admin@foo.com\n"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Unable to bind to %s on this computer. Polcoin Core is probably already "
"running."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
"%s)"),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Warning: -maxtxfee is set very high! Fees this large could be paid on a "
"single transaction."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Warning: -paytxfee is set very high! This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Warning: Please check that your computer's date and time are correct! If "
"your clock is wrong Polcoin Core will not work properly."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Warning: The network does not appear to fully agree! Some miners appear to "
"be experiencing issues."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Warning: We do not appear to fully agree with our peers! You may need to "
"upgrade, or other nodes may need to upgrade."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Warning: error reading wallet.dat! All keys read correctly, but transaction "
"data or address book entries might be missing or incorrect."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
"wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
"you should restore from a backup."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Whitelist peers connecting from the given netmask or IP address. Can be "
"specified multiple times."),
QT_TRANSLATE_NOOP("polcoin-core", ""
"Whitelisted peers cannot be DoS banned and their transactions are always "
"relayed, even if they are already in the mempool, useful e.g. for a gateway"),
QT_TRANSLATE_NOOP("polcoin-core", "(default: %s)"),
QT_TRANSLATE_NOOP("polcoin-core", "(default: 1)"),
QT_TRANSLATE_NOOP("polcoin-core", "<category> can be:"),
QT_TRANSLATE_NOOP("polcoin-core", "Accept command line and JSON-RPC commands"),
QT_TRANSLATE_NOOP("polcoin-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
QT_TRANSLATE_NOOP("polcoin-core", "Accept public REST requests (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Acceptable ciphers (default: %s)"),
QT_TRANSLATE_NOOP("polcoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("polcoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("polcoin-core", "Always query for peer addresses via DNS lookup (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Attempt to recover private keys from a corrupt wallet.dat"),
QT_TRANSLATE_NOOP("polcoin-core", "Block creation options:"),
QT_TRANSLATE_NOOP("polcoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("polcoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Cannot resolve -whitebind address: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("polcoin-core", "Connect only to the specified node(s)"),
QT_TRANSLATE_NOOP("polcoin-core", "Connect through SOCKS5 proxy"),
QT_TRANSLATE_NOOP("polcoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("polcoin-core", "Connection options:"),
QT_TRANSLATE_NOOP("polcoin-core", "Copyright (C) 2009-%i The Polcoin Core Developers"),
QT_TRANSLATE_NOOP("polcoin-core", "Corrupted block database detected"),
QT_TRANSLATE_NOOP("polcoin-core", "Could not parse -rpcbind value %s as network address"),
QT_TRANSLATE_NOOP("polcoin-core", "Debugging/Testing options:"),
QT_TRANSLATE_NOOP("polcoin-core", "Disable safemode, override a real safe mode event (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
QT_TRANSLATE_NOOP("polcoin-core", "Do not load the wallet and disable wallet RPC calls"),
QT_TRANSLATE_NOOP("polcoin-core", "Do you want to rebuild the block database now?"),
QT_TRANSLATE_NOOP("polcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("polcoin-core", "Error initializing block database"),
QT_TRANSLATE_NOOP("polcoin-core", "Error initializing wallet database environment %s!"),
QT_TRANSLATE_NOOP("polcoin-core", "Error loading block database"),
QT_TRANSLATE_NOOP("polcoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("polcoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("polcoin-core", "Error loading wallet.dat: Wallet requires newer version of Polcoin Core"),
QT_TRANSLATE_NOOP("polcoin-core", "Error opening block database"),
QT_TRANSLATE_NOOP("polcoin-core", "Error reading from database, shutting down."),
QT_TRANSLATE_NOOP("polcoin-core", "Error"),
QT_TRANSLATE_NOOP("polcoin-core", "Error: A fatal internal error occurred, see debug.log for details"),
QT_TRANSLATE_NOOP("polcoin-core", "Error: Disk space is low!"),
QT_TRANSLATE_NOOP("polcoin-core", "Error: Unsupported argument -tor found, use -onion."),
QT_TRANSLATE_NOOP("polcoin-core", "Failed to listen on any port. Use -listen=0 if you want this."),
QT_TRANSLATE_NOOP("polcoin-core", "Fee (in PLC/kB) to add to transactions you send (default: %s)"),
QT_TRANSLATE_NOOP("polcoin-core", "Force safe mode (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Generate coins (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "How many blocks to check at startup (default: %u, 0 = all)"),
QT_TRANSLATE_NOOP("polcoin-core", "If <category> is not supplied, output all debugging information."),
QT_TRANSLATE_NOOP("polcoin-core", "Importing..."),
QT_TRANSLATE_NOOP("polcoin-core", "Imports blocks from external blk000??.dat file"),
QT_TRANSLATE_NOOP("polcoin-core", "Include IP addresses in debug output (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
QT_TRANSLATE_NOOP("polcoin-core", "Information"),
QT_TRANSLATE_NOOP("polcoin-core", "Initialization sanity check failed. Polcoin Core is shutting down."),
QT_TRANSLATE_NOOP("polcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("polcoin-core", "Invalid -onion address: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
QT_TRANSLATE_NOOP("polcoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Invalid netmask specified in -whitelist: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Limit size of signature cache to <n> entries (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("polcoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("polcoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("polcoin-core", "Maintain at most <n> connections to peers (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Need to specify a port with -whitebind: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Node relay options:"),
QT_TRANSLATE_NOOP("polcoin-core", "Not enough file descriptors available."),
QT_TRANSLATE_NOOP("polcoin-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
QT_TRANSLATE_NOOP("polcoin-core", "Options:"),
QT_TRANSLATE_NOOP("polcoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("polcoin-core", "Prepend debug output with timestamp (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "RPC SSL options: (see the Polcoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("polcoin-core", "RPC server options:"),
QT_TRANSLATE_NOOP("polcoin-core", "RPC support for HTTP persistent connections (default: %d)"),
QT_TRANSLATE_NOOP("polcoin-core", "Randomly drop 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("polcoin-core", "Randomly fuzz 1 of every <n> network messages"),
QT_TRANSLATE_NOOP("polcoin-core", "Rebuild block chain index from current blk000??.dat files"),
QT_TRANSLATE_NOOP("polcoin-core", "Receive and display P2P network alerts (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Relay and mine data carrier transactions (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Relay non-P2SH multisig (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("polcoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("polcoin-core", "Run a thread to flush wallet periodically (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("polcoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("polcoin-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Server certificate file (default: %s)"),
QT_TRANSLATE_NOOP("polcoin-core", "Server private key (default: %s)"),
QT_TRANSLATE_NOOP("polcoin-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
QT_TRANSLATE_NOOP("polcoin-core", "Set key pool size to <n> (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Set maximum block size in bytes (default: %d)"),
QT_TRANSLATE_NOOP("polcoin-core", "Set minimum block size in bytes (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Set the number of threads to service RPC calls (default: %d)"),
QT_TRANSLATE_NOOP("polcoin-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Show all debugging options (usage: --help -help-debug)"),
QT_TRANSLATE_NOOP("polcoin-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
QT_TRANSLATE_NOOP("polcoin-core", "Signing transaction failed"),
QT_TRANSLATE_NOOP("polcoin-core", "Specify configuration file (default: %s)"),
QT_TRANSLATE_NOOP("polcoin-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
QT_TRANSLATE_NOOP("polcoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("polcoin-core", "Specify pid file (default: %s)"),
QT_TRANSLATE_NOOP("polcoin-core", "Specify wallet file (within data directory)"),
QT_TRANSLATE_NOOP("polcoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("polcoin-core", "Spend unconfirmed change when sending transactions (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Stop running after importing blocks from disk (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "This help message"),
QT_TRANSLATE_NOOP("polcoin-core", "This is experimental software."),
QT_TRANSLATE_NOOP("polcoin-core", "This is intended for regression testing tools and app development."),
QT_TRANSLATE_NOOP("polcoin-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Transaction amount too small"),
QT_TRANSLATE_NOOP("polcoin-core", "Transaction amounts must be positive"),
QT_TRANSLATE_NOOP("polcoin-core", "Transaction too large for fee policy"),
QT_TRANSLATE_NOOP("polcoin-core", "Transaction too large"),
QT_TRANSLATE_NOOP("polcoin-core", "Unable to bind to %s on this computer (bind returned error %s)"),
QT_TRANSLATE_NOOP("polcoin-core", "Unknown network specified in -onlynet: '%s'"),
QT_TRANSLATE_NOOP("polcoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("polcoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("polcoin-core", "Use UPnP to map the listening port (default: %u)"),
QT_TRANSLATE_NOOP("polcoin-core", "Use UPnP to map the listening port (default: 1 when listening)"),
QT_TRANSLATE_NOOP("polcoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("polcoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("polcoin-core", "Verifying blocks..."),
QT_TRANSLATE_NOOP("polcoin-core", "Verifying wallet..."),
QT_TRANSLATE_NOOP("polcoin-core", "Wallet %s resides outside data directory %s"),
QT_TRANSLATE_NOOP("polcoin-core", "Wallet needed to be rewritten: restart Polcoin Core to complete"),
QT_TRANSLATE_NOOP("polcoin-core", "Wallet options:"),
QT_TRANSLATE_NOOP("polcoin-core", "Warning"),
QT_TRANSLATE_NOOP("polcoin-core", "Warning: This version is obsolete, upgrade required!"),
QT_TRANSLATE_NOOP("polcoin-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
QT_TRANSLATE_NOOP("polcoin-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
QT_TRANSLATE_NOOP("polcoin-core", "You need to rebuild the database using -reindex to change -txindex"),
QT_TRANSLATE_NOOP("polcoin-core", "Zapping all transactions from wallet..."),
QT_TRANSLATE_NOOP("polcoin-core", "on startup"),
QT_TRANSLATE_NOOP("polcoin-core", "wallet.dat corrupt, salvage failed"),
};
