type action =
  | FetchData;

type drink = {
    id: int,
    img: string,
    name: string
};

type state = {
    drinks: list(drink)
};

let component = ReasonReact.reducerComponent("Tile");

let make = ( _children) => {
    ...component,
    initialState: () => {
        drinks: [
            {
                id: 1,
                img: "http://placehold.it/200/200",
                name: "fake drink!"
            }
        ]
    },
    reducer: ((), _) => ReasonReact.NoUpdate,
    render: ({state: {drinks}}) =>
    <div className="tile">
        <h3>(ReasonReact.stringToElement("initial state"))</h3>
    </div>
}
