//---------------------------------------------------------------------------

#ifndef ZaokruzivanjeH
#define ZaokruzivanjeH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TZaokruzivanjeForma : public TForm
{
__published:	// IDE-managed Components
	TText *TekstPitanja;
	TButton *PotvrdiButton;
	TRadioButton *Odgovor1;
	TRadioButton *Odgovor2;
	TRadioButton *Odgovor3;
	TRadioButton *Odgovor4;
	TText *TrenutniBodovi;
	void __fastcall Odgovor1Change(TObject *Sender);
	void __fastcall Odgovor2Change(TObject *Sender);
	void __fastcall Odgovor3Change(TObject *Sender);
	void __fastcall Odgovor4Change(TObject *Sender);
	void __fastcall PotvrdiButtonClick(TObject *Sender);
	void __fastcall zatvaranje(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TZaokruzivanjeForma(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TZaokruzivanjeForma *ZaokruzivanjeForma;
//---------------------------------------------------------------------------
#endif
