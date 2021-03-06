<?php

/*
 +-----------------------------------------------------------------------+
 | localization/<lang>/messages.inc                                      |
 |                                                                       |
 | Localization file of the Roundcube Webmail client                     |
 | Copyright (C) 2005-2013, The Roundcube Dev Team                       |
 |                                                                       |
 | Licensed under the GNU General Public License version 3 or            |
 | any later version with exceptions for skins & plugins.                |
 | See the README file for a full license statement.                     |
 |                                                                       |
 +-----------------------------------------------------------------------+

 For translation see https://www.transifex.com/projects/p/roundcube-webmail/resource/messages/
*/

$messages = array();
$messages['errortitle']  = 'Radās kļūda!';
$messages['loginfailed']  = 'Pieslēgties neizdevās';
$messages['cookiesdisabled'] = 'Jūsu pārlūkprogramma neatbalsta sīkdatnes (cookies)';
$messages['sessionerror'] = 'Jūsu sessija ir beigusies.';
$messages['storageerror'] = 'Neizdevās pieslēgties IMAP serverim';
$messages['servererror'] = 'Servera kļūda!';
$messages['servererrormsg'] = 'Servera kļūda: $msg';
$messages['dberror'] = 'Datubāzes kļūda!';
$messages['requesttimedout'] = 'Pieprasījumam iestājās noilgums';
$messages['errorreadonly'] = 'Neizdevās veikt darbību: mape ir tikai lasāma (read only)';
$messages['errornoperm'] = 'Neizdevās veikt darbību: piekļuve liegta';
$messages['erroroverquota'] = 'Operāciju veikt nav iespējams. Uz diska nav brīvas veitas.';
$messages['erroroverquotadelete'] = 'Uz diska nav brīvas vietas. Lai dzēstu vēstuli, lietojiet SHIFT+DEL.';
$messages['invalidrequest'] = 'Nederīgs pieprasījums! Dati netika saglabāti ...';
$messages['invalidhost'] = 'Nederīgs servera nosaukums';
$messages['nomessagesfound'] = 'Šajā pastkastē nav vēstuļu';
$messages['loggedout'] = 'Jūs esat veiksmīgi atslēdzies no sistēmas. Uz redzēšanos!';
$messages['mailboxempty'] = 'Pastkaste ir tukša';
$messages['refreshing'] = 'Atjauno...';
$messages['loading'] = 'Notiek ielāde...';
$messages['uploading'] = 'Augšupielāde failu...';
$messages['uploadingmany'] = 'Augšupielādē failus...';
$messages['loadingdata'] = 'Ielādē datus...';
$messages['checkingmail'] = 'Notiek pasta pārbaude ...';
$messages['sendingmessage'] = 'Tiek sūtīta vēstule ...';
$messages['messagesent'] = 'Vēstule nosūtīta veiksmīgi';
$messages['savingmessage'] = 'Vēstule tiek saglabāta ...';
$messages['messagesaved'] = 'Vēstule saglabāta Uzmetumos';
$messages['successfullysaved'] = 'Veiksmīgi saglabāts.';
$messages['addedsuccessfully'] = 'Kontakts veiksmīgi pievienots adrešu grāmatai';
$messages['contactexists'] = 'Kontakts ar šādu e-pasta adresi jau eksistē';
$messages['contactnameexists'] = 'Kontakts ar šādu vārdu jau eksistē.';
$messages['blockedimages'] = 'Drošības nolūkos attēli, kuri tiek ielādēti no cita servera, šajā vēstulē ir bloķēti';
$messages['encryptedmessage'] = 'Atvainojiet - šī ir šifrēta vēstule un diemžēl nevar tikt parādīta ...';
$messages['nocontactsfound'] = 'Kontakti netika atrasti';
$messages['contactnotfound'] = 'Pieprasītais kontakts nav atrasts';
$messages['contactsearchonly'] = 'Lai atrastu kontaktus, ievadiet meklēšanas kritērijus';
$messages['sendingfailed'] = 'Vēstule netika nosūtīta';
$messages['senttooquickly'] = 'Lūdzu uzgaidiet $sec sekundi(-es) pirms sūtiet šo vēstuli';
$messages['errorsavingsent'] = 'Saglabājot vēstuli notika kļūda - vēstule netika saglabāta';
$messages['errorsaving'] = 'Saglabājot notika kļūda';
$messages['errormoving'] = 'Vēstule(s) netika pārvietota(s)';
$messages['errorcopying'] = 'Vēstules pārkopēt neizdevās';
$messages['errordeleting'] = 'Vēstules izdzēst neizdevās';
$messages['errormarking'] = 'Iezīmēt vēstules nebija iespējams';
$messages['deletecontactconfirm']  = 'Vai tiešām vēlaties dzēst iezīmētās kontaktpersonas?';
$messages['deletegroupconfirm']  = 'Vai tiešām vēlaties dzēst atzīmēto grupu?';
$messages['deletemessagesconfirm'] = 'Vai tiešām vēlaties dzēst iezīmētās vēstules?';
$messages['deletefolderconfirm']  = 'Vai tiešām vēlaties dzēst šo mapi?';
$messages['purgefolderconfirm']  = 'Vai tiešām vēlaties dzēst visas vēstules, kuras atrodas šajā mapē?';
$messages['contactdeleting'] = 'Dzēš kontaktus...';
$messages['groupdeleting'] = 'Dzēš grupu...';
$messages['folderdeleting'] = 'Dzēš mapi...';
$messages['foldermoving'] = 'Pārvieto mapi...';
$messages['foldersubscribing'] = 'Pieslēdz mapi...';
$messages['folderunsubscribing'] = 'Atslēdz mapi...';
$messages['formincomplete'] = 'Forma nav pilnībā aizpildīta';
$messages['noemailwarning'] = 'Lūdzu ievadiet korektu e-pasta adresi';
$messages['nonamewarning']  = 'Lūdzu ievadiet vārdu';
$messages['nopagesizewarning'] = 'Lūdzu ievadiet lapas izmēru';
$messages['nosenderwarning'] = 'Lūdzu ievadiet sūtītāja e-pasta adresi';
$messages['norecipientwarning'] = 'Lūdzu ievadiet vismaz vienu saņēmēju';
$messages['nosubjectwarning']  = 'Lauks "temats" ir tukšs. Vai vēlaties to aizpildīt tagad?';
$messages['nobodywarning'] = 'Sūtīt vēstuli bez teksta?';
$messages['notsentwarning'] = 'Vēstule netika nosūtīta. Vai tiešām vēlaties atcelt vēstules rakstīšanu?';
$messages['noldapserver'] = 'Lai meklētu, lūdzu izvēlaties LDAP serveri';
$messages['nosearchname'] = 'Lūdzu ievadiet kontaktpersonas vārdu vai e-pasta adresi';
$messages['notuploadedwarning'] = 'Visi pielikumi vēl nav augšupielādēti - lūdzu uzgaidiet vai atceļiet augšupielādi';
$messages['searchsuccessful'] = 'Atrastas $nr vēstules';
$messages['contactsearchsuccessful'] = 'Atrasti $nr kontakti';
$messages['searchnomatch'] = 'Meklējot nekas netika atrasts';
$messages['searching'] = 'Meklē...';
$messages['checking'] = 'Pārbauda...';
$messages['nospellerrors'] = 'Pareizrakstības kļūdas netika atrastas';
$messages['folderdeleted'] = 'Mape veiksmīgi izdzēsta';
$messages['foldersubscribed'] = 'Mape veiksmīgi pieslēgta.';
$messages['folderunsubscribed'] = 'Mape veiksmīgi atslēgta.';
$messages['folderpurged'] = 'Mape tika veiksmīgi iztukšota.';
$messages['folderexpunged'] = 'Mape saspiesta veiksmīgi';
$messages['deletedsuccessfully'] = 'Veiksmīgi izdzēsts';
$messages['converting'] = 'Tiek noņemts vēstules formatējums...';
$messages['messageopenerror'] = 'Nevarēja ielādēt vēstuli no servera';
$messages['fileuploaderror'] = 'Faila augšupielāde neveiksmīga';
$messages['filesizeerror'] = 'Augšupielādētais fails pārsniedz pieļaujamo $size izmēru.';
$messages['copysuccess'] = 'Veiksmīgi nokopētas $nr adreses.';
$messages['copyerror'] = 'Nevarēja nokopēt nevienu adresi.';
$messages['sourceisreadonly'] = 'Adreses avots ir lasīšanas režīmā tikai';
$messages['errorsavingcontact'] = 'Kontakta adresi nevarēja saglabāt.';
$messages['movingmessage'] = 'Pārvieto vēstules...';
$messages['copyingmessage'] = 'Kopē vēstules...';
$messages['copyingcontact'] = 'Kopē kontaktus...';
$messages['deletingmessage'] = 'Dzēš vēstules...';
$messages['markingmessage'] = 'Atzīmē vēstules...';
$messages['addingmember'] = 'Kontaktus pievieno grupai...';
$messages['removingmember'] = 'Kontaktus atvieno no grupas...';
$messages['receiptsent'] = 'Saņemšanas apstiprinājums nosūtīts veiksmīgi.';
$messages['errorsendingreceipt'] = 'Neizdevās nosūtīt saņemšanas apstiprinājumu.';
$messages['deleteidentityconfirm'] = 'Vai Jūs tiešām vēlaties dzēst šo identitāti?';
$messages['nodeletelastidentity'] = 'Šo identitāti nav iespējams izdzēst, jo tā ir pati pēdējā.';
$messages['forbiddencharacter'] = 'Mapes nosaukums satur aizliegtus simbolus.';
$messages['selectimportfile'] = 'Lūdzu norādiet failu, kuru vēlaties augšupielādēt.';
$messages['addresswriterror'] = 'Izvēlētās adrešu grāmatas datus nav iespējams rediģēt.';
$messages['contactaddedtogroup'] = 'Kontakti tika veiksmīgi pievienoti šai grupai.';
$messages['contactremovedfromgroup'] = 'Kontakti tika veiksmīgi atvienoti no šīs grupas.';
$messages['nogroupassignmentschanged'] = 'Grupā nekas netika mainīts.';
$messages['importwait'] = 'Importēju, lūdzu uzgaidiet...';
$messages['importformaterror'] = 'Imports neizdevās! Augšupielādētais fails nav derīgs importam.';
$messages['importconfirm'] = '<b>Veiksmīgi ieimportēti $inserted kontakti</b>';
$messages['importconfirmskipped'] = '<b>Izlaida $skipped jau eksistējošus ierakstus</b>';
$messages['importmessagesuccess'] = 'Veiksmīgi ieimportētas $nr vēstules';
$messages['importmessageerror'] = 'Importēšanas kļūda! Augšupielādētā datne satur nekorektus datus';
$messages['opnotpermitted'] = 'Darbība nav atļauta!';
$messages['nofromaddress'] = 'Izvēlētajai identitātei nav norādīta e-pasta adrese.';
$messages['editorwarning'] = 'Pārslēdzoties uz vienkāršotu teksta redaktoru, tiks pazaudēts esošais teksta formatējums. Vai tiešām vēlaties turpināt?';
$messages['httpreceivedencrypterror'] = 'Notika kritiska kļūme. Lūdzu nekavējoties sazinieties ar Jūsu administratoru. <b>Jūsu vēstuli nosūtīt nav iespējams.</b>';
$messages['smtpconnerror'] = 'SMTP kļūme ($code): Neizdevās pieslēgties serverim';
$messages['smtpautherror'] = 'SMTP kļūda ($code): Neizdevās autorizēties.';
$messages['smtpfromerror'] = 'SMTP kļūda ($code): Neizdevās iestatīt sūtītāju "$from" ($msg).';
$messages['smtptoerror'] = 'SMTP kļūda ($code): Neizdevās pievienot saņēmēju "$to" ($msg).';
$messages['smtprecipientserror'] = 'SMTP kļūda: Nav iespējams aptrādāt saņēmēju sarakstu.';
$messages['smtperror'] = 'SMTP kļūda: $msg';
$messages['emailformaterror'] = 'Nepareiza e-pasta adrese: $email';
$messages['toomanyrecipients'] = 'Pārāk daudz saņēmēju. Samaziniet skaitu līdz $max.';
$messages['maxgroupmembersreached'] = 'Grupas dalībnieku skaits pārsniedz limitu $max.';
$messages['internalerror'] = 'Notika servera iekšējā kļūda. Lūdzu mēģiniet vēlreiz.';
$messages['contactdelerror'] = 'Kontaktus izdzēst neizdevās.';
$messages['contactdeleted'] = 'Kontakti izdzēsti veiksmīgi.';
$messages['contactrestoreerror'] = 'Izdzēstos kontaktus atjaunot neizdevās.';
$messages['contactrestored'] = 'Kontakti atjaunoti veiksmīgi.';
$messages['groupdeleted'] = 'Grupa izdzēsta veiksmīgi.';
$messages['grouprenamed'] = 'Grupa pārdēvēta veiksmīgi.';
$messages['groupcreated'] = 'Grupa izveidota veiksmīgi.';
$messages['savedsearchdeleted'] = 'Saglabātais meklēšanas pieprasījums izdzēsts veiksmīgi.';
$messages['savedsearchdeleteerror'] = 'Saglabāto meklēšanas pieprasījumu izdzēst neizdevās.';
$messages['savedsearchcreated'] = 'Saglabātais meklēšanas pieprasījums saglabāts veiksmīgi.';
$messages['savedsearchcreateerror'] = 'Meklēšanas pieprasījumu izveidot neizdevās.';
$messages['messagedeleted'] = 'Vēstule(s) veiksmīgi izdzēsta(s).';
$messages['messagemoved'] = 'Vēstule(s) veiksmīgi pārvietota(s).';
$messages['messagecopied'] = 'Vēstule(s) veiksmīgi pārkopēta(s).';
$messages['messagemarked'] = 'Vēstule(s) veiksmīgi atzīmēta(s).';
$messages['autocompletechars'] = 'Lai automātiski meklētu, ievadiet vismaz $min burtus.';
$messages['autocompletemore'] = 'Atrasti vairāki ieraksti. Papildiniet meklēšanas kritēriju ar vairāk burtiem.';
$messages['namecannotbeempty'] = 'Lūdzu ievadiet vārdu.';
$messages['nametoolong'] = 'Vārds ir pārāk garš.';
$messages['folderupdated'] = 'Mape vieksmīgi atjaunota.';
$messages['foldercreated'] = 'Mape veiksmīgi izveidota.';
$messages['invalidimageformat'] = 'Nederīgs attēla formāts.';
$messages['mispellingsfound'] = 'Vēstulē atrastas pareizrakstības kļūdas.';
$messages['parentnotwritable'] = 'Neizdevās izveidot/pārvietot mapi atzīmētajā virsmapē. Nav piekļuves tiesību.';
$messages['messagetoobig'] = 'Vēstule daļa ir pārāk liela, lai to varētu apstrādāt.';
$messages['attachmentvalidationerror'] = 'BRĪDINĀJUMS! Šis pielikums ir aizdomīgs, jo tā tips neatbilst tipam, kurš ir uzrādīts e-pasta ziņojumā. Ja jūs neuzticaties sūtītājam, šo failu Jums vaļā vērt nevajadzētu, jo tas var saturēt ļaunprātīgu saturu. <br/><br/><em>Būtu jābūt: $expected; Bet ir: $detected</em>';
$messages['noscriptwarning'] = 'Uzmanību: lai lasītu e-pastus, Jūsu pārlūkprogrammā jābūt ieslēgtiem JavaScript.';

?>
