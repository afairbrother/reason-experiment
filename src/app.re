[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./img/logo.svg";

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div className="App">
        <Header />
      <p className="App-intro">
        (ReasonReact.stringToElement("To get started, edit"))
        <code> (ReasonReact.stringToElement(" src/App.re ")) </code>
        (ReasonReact.stringToElement("and save to reload."))
      </p>
      <Tile title="First Item" />
      <Footer />
    </div>
};
